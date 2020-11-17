/**
 * 10420. 기념일 1
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,352 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let N = parseInt(fs.readFileSync('/dev/stdin').toString().trim());
    let date = new Date('2014-4-1');

    date.setDate(date.getDate() + N);

    console.log(date.toISOString().split('T')[0]);
}

main();
