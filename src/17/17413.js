/**
 * 17413. 단어 뒤집기 2
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 13,416 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 12월 21일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim();
    let rgx1= /(<[\s\w]+>|\w+)/g,
        rgx2 = /^</;

    console.log(s.replace(rgx1, x => rgx2.test(x) ? x : strRev(x)));
}

function strRev(s) {
    return s.split('').reverse().join('');
}

main();
