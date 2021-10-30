/**
 * 23343. JavaScript
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,588 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2021년 10월 30일
 */

const fs = require('fs');

function main() {
    let [x, y] = fs.readFileSync('/dev/stdin').toString().trim().split(' ')

    console.log(x - y);
}

main();
