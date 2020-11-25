/**
 * 14803. Steed 2: Cruise Control (Small)
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,516 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n');
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let [D, N] = input.shift().split(' ').map(x => +x),
            max = 0;

        for (let j = 0; j < N; j++) {
            let [K, S] = input.shift().split(' ').map(x => +x),
                t = (D - K) / S;

            if (t > max) {
                max = t;
            }
        }

        console.log(`Case #${i + 1}: ${(D / max).toFixed(6)}`);
    }
}

main();