/**
 * 10270. Algebraic Teamwork
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,820 KB
 * 소요 시간: 336 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift(),
        mod = 1000000007;

    for (let i = 0; i < T; i++) {
        let n = +input[i],
            res = 1;

        for (let j = 1; j <= n; j++) {
            res = (res * j) % mod;
        }

        console.log(res - 1);
    }
}

main();