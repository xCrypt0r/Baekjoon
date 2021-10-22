/**
 * 20959. Šifra
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2021년 10월 22일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim();

    console.log(new Set(input.match(/\d+/g)).size);
}

main();