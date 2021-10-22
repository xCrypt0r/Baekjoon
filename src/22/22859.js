/**
 * 22859. HTML 파싱
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 12,248 KB
 * 소요 시간: 144 ms
 * 해결 날짜: 2021년 10월 22일
 */

const fs = require('fs');

function main() {
    let html = fs.readFileSync('/dev/stdin').toString().trim();
    let divs = [...html.matchAll(/<div title="([\w\s]+)">(.*?)<\/div>/g)];
    let rgx_tag = /<(?!\/?p(?=>|\s.*>))\/?.*?>/g;
    let rgx_paragraph = /<p>(.*?)<\/p>/g;
    let rgx_spaces = /\s{2,}/g;
    let res = '';

    for (let i = 0, len = divs.length; i < len; i++) {
        let [, title, content] = divs[i];
        let paragraphs = [...content.replace(rgx_tag, '').matchAll(rgx_paragraph)]
            .map(paragraph => paragraph[1].trim().replace(rgx_spaces, ' '));

        res += 'title : ' + title + '\n' + paragraphs.join('\n') + '\n';
    }

    process.stdout.write(res);
}

main();