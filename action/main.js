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
    
    saveInfo(problems.find(p => p.id == id));
}

function saveInfo({ id, title, level }) {
    let sid = String(id),
        folder = sid.substr(0, sid.length - 3),
        codes = glob.sync(`${folder}/Q${id}.*`, { cwd: '..' }),
        info = { id, title, level, codes };

    if (list.every(p => p.id != id)) {
        list.push(info);
        console.log(`[level ${level}] ${id}. ${title} saved`);
    } else {
        console.log(`[level ${level}] ${id}. ${title} already exists`);
    }
}

function updateReadme(list) {
    let readme = fs.readFileSync('README.template.md', 'utf-8');

    let trs = list.map(p => {
        let level = `<td><img src="https://static.solved.ac/tier_small/${p.level}.svg"></td>`,
            id = `<td>${p.id}</td>`,
            title = `<td>${p.title}</td>`,
            codes = `<td><a href="${p.codes[0]}">코드</a></td>`,
            tr = `
    <tr>
        ${level}
        ${id}
        ${title}
        ${codes}
    </tr>`;

        return tr;
    });

    readme = readme
        .replace('${{TOTAL}}', list.length)
        .replace('${{SOLVED}}', trs.join('').trim());

    fs.writeFileSync('../README.md', readme);
}

main();
