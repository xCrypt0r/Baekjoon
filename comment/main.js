const Config        = require('./config.json');
const { promisify } = require('util');
const request       = promisify(require('request'));
const cheerio       = require('cheerio');
const prompt        = require('prompt-sync')({ sigint: true });
const fs            = require('fs');
const nf            = new Intl.NumberFormat();
const path          = require('path');
const rgx_file      = /\d+\..+/;
const argv          = process.argv.slice(2).map(a => a.match(rgx_file)[0]);
const URL           = 'https://www.acmicpc.net/status?from_mine=1&problem_id={problem}&user_id={user}';

require('console.table');

async function main() {
    if (argv.length < 1) {
        console.log('사용법: node main.js <파일명>');
        console.log('ex) node main.js 1000.cpp');

        return;
    }

    let id = argv[0].replace(/\..+$/, ''),
        target = `../src/${Math.floor(id / 1000)}/${argv[0]}`;

    setComment(target, await getProblemInfo(id));
}

async function getProblemInfo(id) {
    let url = URL.replace('{problem}', id).replace('{user}', Config.BAEKJOON_USER),
        { body } = await request(url),
        $ = cheerio.load(body),
        rows = $('#status-table > tbody > tr'),
        infos = [],
        tmp = 0;

    rows.each((i, row) => {
        let $row = $(row);

        // 출력 형식, 틀렸습니다, 시간 초과, 메모리 초과, 출력 초과, 런타임 에러, 컴파일 에러 제외
        if (/result-(?:pe|wa|tle|mle|ole|rte|ce)/.test($row.find('.result span').attr('class'))) {
            return;
        }

        let title = $row.find('td:nth-child(3) > a').attr('title'),
            result = $row.find('.result').text(),
            memory = $row.find('.memory').text(),
            time = $row.find('.time').text(),
            language = $row.find('td:nth-child(7)').text(),
            date = $row.find('td:nth-child(9) > a').attr('title');

        infos.push({ i: ++tmp, title, result, memory, time, language, date });
    });

    console.table(infos.map(({ title, ...props }) => props));

    let index = prompt('주석으로 사용할 정보의 인덱스를 입력해주세요: ');

    index = parseInt(index);

    if (Number.isInteger(index) && index > 0 && index <= infos.length) {
        info = infos[index - 1];
    } else {
        console.log('잘못된 인덱스입니다. 프로그램을 종료합니다.');
        process.exit(1);
    }

    let date = info.date
        .split(' ')[0]
        .replace(/(\d{4})-(\d{2})-(\d{2})/, (s, y, m, d) => `${y}년 ${+m}월 ${+d}일`);

    return {
        id,
        title: info.title,
        memory: info.memory,
        time: info.time,
        language: info.language,
        date
    };
}

function setComment(target, { id, title, memory, time, language, date }) {
    let ext = path.extname(target),
        template,
        result;

    switch (ext.toLowerCase()) {
        case '.bf':
        case '.c':
        case '.cpp':
        case '.cs':
        case '.go':
        case '.hx':
        case '.java':
        case '.js':
        case '.kt':
        case '.php':
        case '.rs':
        case '.sv':
        case '.swift':
        case '.ts':
            template = fs.readFileSync('templates/comment_cpp.txt', 'utf8');

            break;

        case '.ada':
            template = fs.readFileSync('templates/comment_ada.txt', 'utf8');

            break;

        case '.asm':
            template = fs.readFileSync('templates/comment_asm.txt', 'utf8');

            break;

        case '.awk':
        case '.r':
        case '.tcl':
            template = fs.readFileSync('templates/comment_r.txt', 'utf8');

            break;

        case '.f95':
            template = fs.readFileSync('templates/comment_f95.txt', 'utf8');

            break;

        case '.fs':
            template = fs.readFileSync('templates/comment_fs.txt', 'utf8');

            break;

        case '.lua':
            template = fs.readFileSync('templates/comment_lua.txt', 'utf8');

            break;

        case '.ml':
            template = fs.readFileSync('templates/comment_ml.txt', 'utf8');

            break;

        case '.pas':
            template = fs.readFileSync('templates/comment_pas.txt', 'utf8');

            break;

        case '.pl':
            template = fs.readFileSync('templates/comment_pl.txt', 'utf8');

            break;

        case '.py':
            template = fs.readFileSync('templates/comment_py.txt', 'utf8');

            break;

        case '.rb':
            template = fs.readFileSync('templates/comment_rb.txt', 'utf8');

            break;

        case '.scm':
            template = fs.readFileSync('templates/comment_scm.txt', 'utf8');

            break;

        case '.sh':
            template = fs.readFileSync('templates/comment_sh.txt', 'utf8');

            if (title.includes('\'')) {
                template = template.replace(/'/g, '"');
            }

            break;

        case '.txt':
            template = fs.readFileSync('templates/comment_txt.txt', 'utf8');

            break;

        case '.vb':
            template = fs.readFileSync('templates/comment_vb.txt', 'utf8');

            break;

        default:
            throw new Error(`지원되지 않는 확장자: ${ext}`);
    }

    result = template
        .replace('{problem_id}', id)
        .replace('{problem_title}', title)
        .replace('{user_id}', Config.BAEKJOON_USER)
        .replace('{language}', language)
        .replace('{memory}', nf.format(memory))
        .replace('{time}', nf.format(time))
        .replace('{date}', date)
        + '\n\n'
        + fs.readFileSync(target, 'utf8');

    fs.writeFileSync(target, result, 'utf8');
}

main();