/**
 * 7482. 상자 만들기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,296 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 12월 11일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let n = +input.shift();

    for (let i = 0; i < n; i++) {
        console.log((+input[i] / 6).toFixed(10));
    }
}

main();