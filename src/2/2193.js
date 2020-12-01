/**
 * 2193. 이친수
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,312 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 12월 1일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString();
    let dp = new Array(n + 1);

    dp[0] = 0n;
    dp[1] = 1n;

    for (let i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    console.log(dp[n] + '');
}

main();
