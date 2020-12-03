/**
 * 16503. 괄호 없는 사칙연산
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,600 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 12월 3일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim().split(' ');
    let a = ~~eval(~~eval(s[0] + s[1] + s[2]) + s[3] + s[4]),
        b = ~~eval(s[0] + s[1] + ~~eval(s[2] + s[3] + s[4]));

    console.log(Math.min(a, b));
    console.log(Math.max(a, b));
}

main();