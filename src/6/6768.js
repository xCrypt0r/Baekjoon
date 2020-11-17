/**
 * 6768. Don’t pass me the ball!
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,332 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 11월 12일
 */

const fs = require('fs');

function main() {
    let J = +fs.readFileSync('/dev/stdin').toString();

    console.log(J < 3 ? 0 : (J - 1) * (J - 2) * (J - 3) / 6);
}

main();
