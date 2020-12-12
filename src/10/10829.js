/**
 * 10829. 이진수 변환
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,344 KB
 * 소요 시간: 156 ms
 * 해결 날짜: 2020년 12월 13일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString();

    console.log(n.toString(2));
}

main();
