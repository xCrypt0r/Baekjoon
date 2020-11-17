/**
 * 13131. HicCup
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,072 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 10월 15일
 */

const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString().trim();

    console.log((N * N * 2 + N * 30 + 38) * N);
}

main();
