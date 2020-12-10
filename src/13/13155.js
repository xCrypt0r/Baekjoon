/**
 * 13155. Common Knowledge
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,300 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 12월 10일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString();

    console.log(BigInt(8 ** n) + '');
}

main();
