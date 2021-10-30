/**
 * 16172. 나는 친구가 적다 (Large)
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 10,076 KB
 * 소요 시간: 692 ms
 * 해결 날짜: 2021년 10월 30일
 */

const fs = require('fs');

function main() {
    let [S, K] = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

    console.log(+S.replace(/[^a-z]/gi, '').includes(K));
}

main();