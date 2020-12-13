/**
 * 2671. 잠수함식별
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,308 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 12월 13일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim();
    let rgx = /^(?:100+1+|01)+$/;

    console.log(rgx.test(s) ? 'SUBMARINE' : 'NOISE');
}

main();
