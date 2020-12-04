/**
 * 14004. ICPC
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,328 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 12월 4일
 */

const fs = require('fs');

function main() {
    let [A, B, C, D] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);

    console.log(Math.floor((C + D) / (A - B)));
}

main();