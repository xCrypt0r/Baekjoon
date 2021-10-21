/**
 * 13989. Abbreviation
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 10,068 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2021년 10월 22일
 */

const fs = require('fs');

function main() {
    let lines = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let rgx = /(\b[A-Z][a-z]+\b )+\b[A-Z][a-z]+\b/g;
    let res = [];

    for (let i = 0, len = lines.length; i < len; i++) {
        res.push(lines[i].replace(rgx, makeAbbreviation));
    }

    process.stdout.write(res.join('\n'));
}

function makeAbbreviation(s) {
    return s.replace(/[^A-Z]/g, '') + ' (' + s + ')';
}

main();