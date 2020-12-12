/**
 * 9661. 돌 게임 7
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,304 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 12월 12일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString() % 5;

    console.log(n === 0 || n === 2 ? 'CY' : 'SK');
}

main();