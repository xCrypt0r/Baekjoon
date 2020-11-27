/**
 * 7523. Gauß
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,940 KB
 * 소요 시간: 168 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let [n, m] = input[i].split(' ').map(x => +x),
            res = (BigInt(m - n + 1) * BigInt(n + m)) / 2n;

        console.log(`Scenario #${i + 1}:\n${res}\n`);
    }
}

main();