const { promisify } = require('util');
const chalk         = require('chalk');
const request       = promisify(require('request'));
const cheerio       = require('cheerio');
const glob          = require('fast-glob');
const fs            = require('fs');
const filesize      = require('filesize');
const nf            = new Intl.NumberFormat();
const path          = require('path');
const exec          = promisify(require('child_process').exec);
const rgx_id        = /\d+/;
const argv          = process.argv.slice(2).map(a => a.match(rgx_id)[0]);
const URL           = 'https://solved.ac/search?query=';
const saveFile      = './solved.json';
const list          = require(saveFile);
const LANG          = require('./langs.json');

function main() {
    let promises = [],
        ids = [...new Set(argv)];

    for (let id of ids) {
        promises.push(getInfo(id));
    }

    return Promise.all(promises)
        .then(() => {
            list.sort((a, b) => a.id - b.id);
            updateReadme(list);
            fs.writeFileSync(saveFile, JSON.stringify(list, null, 4));
        });
}

async function getInfo(id) {
    let { body } = await request(URL + id),
        $ = cheerio.load(body),
        problems = JSON.parse($('#__NEXT_DATA__').html()).props.pageProps.problems.items,
        { problemId, titleKo, level } = problems.find(p => p.problemId === +id);

    saveInfo(problemId, titleKo, level);
}

function saveInfo(id, title, level) {
    let sid = String(id),
        folder = sid.substr(0, sid.length - 3),
        codes = glob.sync(`src/${folder}/${id}.*`, { cwd: '..' }),
        info = { id, title, level, codes },
        i = list.findIndex(p => p.id === +id);

    if (i != -1) {
        if (JSON.stringify(list[i]) !== JSON.stringify(info)) {
            list[i] = info;

            console.log(chalk.red(`[Updated] ${id}. ${title}`));
        } else {
            console.log(chalk.white(`[Duplicated] ${id}. ${title}`));
        }
    } else {
        list.push(info);
        console.log(chalk.green(`[Added] ${id}. ${title}`));
    }
}

async function updateReadme(list) {
    let readme = fs.readFileSync('README.template.md', 'utf-8'),
        total = 0,
        langs = [],
        langsMarkdown = [];

    list.forEach(p => {
        p.codes.forEach(code => {
            let ext = LANG[path.extname(code).substr(1)],
                target = langs.find(lang => lang.name === ext);

            if (!target) {
                langs.push({ name: ext, count: 0 });

                target = langs[langs.length - 1];
            }

            target.count++;
        });

        total += p.codes.length;
    });

    langs.push({ name: 'Total', count: total });

    for (let lang of langs) {
        let ext = Object.keys(LANG).find(key => LANG[key] === lang.name) || '',
            [lines, size] = (await exec(`bash getDetails.sh ${ext}`)).stdout.trim().split(' ');

        lang.lines = +lines;
        lang.size = +size;
    }

    langs.sort((x, y) => {
        if (x.name === 'Total') {
            return Infinity;
        }

        if (x.count !== y.count) {
            return x.count > y.count ? -1 : 1;
        } else {
            if (x.lines !== y.lines) {
                return x.lines > y.lines ? -1 : 1;
            } else {
                return x.size > y.size ? -1 : 1;
            }
        }
    });

    for (let { name, count, lines, size } of langs) {
        langsMarkdown.push(`
    <tr>
        <td><b>${name}</b></td>
        <td>${nf.format(count)}</td>
        <td>${nf.format(lines)}</td>
        <td>${filesize(size)}</td>
    </tr>`
        );
    }

    let codesMarkdown = list.map(p => {
        let codes = p.codes.map(code => {
            return `<a href="${code}">${LANG[path.extname(code).substr(1)]}</a>`;
        });

        return `
    <tr>
        <td>
            <a href="https://www.acmicpc.net/problem/${p.id}">
                <img src="https://static.solved.ac/tier_small/${p.level}.svg" height="14">
                ${p.id} ${p.title}
            </a>
        </td>
        <td align="center">
            ${codes.join('<br>')}
        </td>
    </tr>`;
    });

    readme = readme
        .replace('${{TOTAL}}', list.length)
        .replace('${{LANGUAGES}}', langsMarkdown.join('').trim())
        .replace('${{SOLVED}}', codesMarkdown.join('').trim());

    fs.writeFileSync('../README.md', readme);
}

main();
