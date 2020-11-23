/**
 * 2721. 삼각수의 합
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,356 KB
 * 소요 시간: 228 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let sum = 0;

        for (let k = 1, n = input[i]; k <= n; k++) {
            sum += k * (k + 1) * (k + 2) / 2;
        }

        console.log(sum);
    }
}

main();