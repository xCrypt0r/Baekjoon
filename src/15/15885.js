/**
 * 15885. 고장난 시계
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 148 ms
 * 해결 날짜: 2020년 12월 15일
 */

const fs = require('fs');

function main() {
    let [a, b] = fs.readFileSync('/dev/stdin').toString().split(' ').map(x => +x);

    console.log(Math.floor(Math.abs(a / b - 1) * 2));
}

main();