/**
 * 15904. UCPC는 무엇의 약자일까?
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,304 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 15일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('../stdin').toString().trim();
    let rgx = /^.*U.*C.*P.*C.*$/;

    console.log(rgx.test(input) ? 'I love UCPC' : 'I hate UCPC');
}

main();