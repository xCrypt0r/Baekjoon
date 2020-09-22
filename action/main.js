const { promisify } = require('util');
const request       = promisify(require('request'));
const cheerio       = require('cheerio');
const glob          = require('fast-glob');
const fs            = require('fs');
const path          = require('path');
const rgx_id        = /\d+/;
const argv          = process.argv.slice(2).map(a => a.match(rgx_id)[0]);
const URL           = 'https://solved.ac/search?query=';
const saveFile      = './solved.json';
const list          = require(saveFile);
const LANG          = require('./langs.json');

function main() {
    let promises = [];

    for (let id of argv) {
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
        { problems } = JSON.parse($('#__NEXT_DATA__').html()).props.pageProps.result;
    
    saveInfo(problems.find(p => p.id === +id));
}

function saveInfo({ id, title, level }) {
    let sid = String(id),
        folder = sid.substr(0, sid.length - 3),
        codes = glob.sync(`${folder}/Q${id}.*`, { cwd: '..' }),
        info = { id, title, level, codes },
        i = list.findIndex(p => p.id === +id);

    if (i != -1) {
        if (JSON.stringify(list[i]) !== JSON.stringify(info)) {
            list[i] = info;

            console.log(`[Updated] ${id}. ${title}`);
        } else {
            console.log(`[Duplicated] ${id}. ${title}`);
        }
    } else {
        list.push(info);
        console.log(`[Added] ${id}. ${title}`);
    }
}

function updateReadme(list) {
    let readme = fs.readFileSync('README.template.md', 'utf-8'),
        langs = {},
        langsMarkdown = [];

    list.forEach(p => {
        p.codes.forEach(code => {
            let ext = path.extname(code).substr(1);

            langs[LANG[ext]] ? langs[LANG[ext]]++ : langs[LANG[ext]] = 1;
        });
    });

    for (let [lang, count] of Object.entries(langs)) {
        langsMarkdown.push(`
    <tr>
        <td><b>${lang}</b></td>
        <td>${count}</td>
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
