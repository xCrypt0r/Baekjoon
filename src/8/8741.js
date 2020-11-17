/**
 * 8741. 이진수 합
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 28,100 KB
 * 소요 시간: 168 ms
 * 해결 날짜: 2020년 11월 17일
 */

const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString();

    process.stdout.write(new Array(N + 1).join('1') + new Array(N).join('0'));
}

main();