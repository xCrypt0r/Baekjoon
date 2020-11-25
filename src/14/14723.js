/**
 * 14723. 이산수학 과제
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,312 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString();
    let x = ~~((Math.sqrt(N * 8 - 7) - 1) / 2 + 1),
        y = x * (x + 1) / 2;

    console.log(`${y - N + 1} ${N - y + x}`);
}

main();