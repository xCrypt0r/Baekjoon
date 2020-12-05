/**
 * 1975. Number Game
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 25,672 KB
 * 소요 시간: 540 ms
 * 해결 날짜: 2020년 12월 5일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let N = +input[i],
            count = 0;

        for (let j = 2; j <= N; j++) {
            let temp = N;

            while (temp % j === 0) {
                count++;
                temp /= j;
            }
        }

        output += count + '\n';
    }

    process.stdout.write(output);
}

main();
