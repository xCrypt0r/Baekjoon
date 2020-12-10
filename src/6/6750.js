/**
 * 6750. Rotating letters
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,316 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 12월 10일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('');
    let signs = ['I','O','S','H','Z','X','N'];

    console.log(['NO', 'YES'][+input.every(x => signs.includes(x))]);
}

main();