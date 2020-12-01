/**
 * 1699. 제곱수의 합
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 10,540 KB
 * 소요 시간: 300 ms
 * 해결 날짜: 2020년 12월 1일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString();
    let dp = new Array(n + 1).fill(0).map((v, i) => i);

    for (let i = 2; i <= n; i++) {
        for (let j = 2, limit = ~~Math.sqrt(i); j <= limit; j++) {
            dp[i] = Math.min(dp[i], dp[i - j * j] + 1);
        }
    }

    console.log(dp[n]);
}

main();
