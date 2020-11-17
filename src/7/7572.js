/**
 * 7572. 간지(干支)
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,340 KB
 * 소요 시간: 144 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString() + 387;
    let a = (N + 5) % 12,
        b = (N + 9) % 10;

    console.log(String.fromCharCode(65 + a) + b);
}

main();