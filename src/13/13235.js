/**
 * 13235. 팰린드롬
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim();

    console.log(s === strRev(s));
}

function strRev(s) {
    return s.split('').reverse().join('');
}

main();