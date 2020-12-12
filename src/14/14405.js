/**
 * 14405. 피카츄
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 12월 13일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim();
    let rgx = /(?:pi|ka|chu)/g;

    console.log(s.replace(rgx, '') === '' ? 'YES' : 'NO');
}

main();
