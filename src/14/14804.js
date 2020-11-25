/**
 * 14804. Steed 2: Cruise Control (Large)
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 10,040 KB
 * 소요 시간: 152 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n'),
        output = '';
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

        output += `Case #${i + 1}: ${(D / max).toFixed(6)}\n`;
    }

    process.stdout.write(output);
}

main();