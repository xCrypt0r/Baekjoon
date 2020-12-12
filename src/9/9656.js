/**
 * 9656. 돌 게임 2
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,360 KB
 * 소요 시간: 196 ms
 * 해결 날짜: 2020년 12월 12일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString();

    console.log(['SK', 'CY'][n % 2]);
}

main();