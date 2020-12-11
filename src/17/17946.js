/**
 * 17946. 피자는 나눌 수록 커지잖아요
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,368 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 12월 11일
 */

const fs = require('fs');

function main() {
    let len = fs.readFileSync('/dev/stdin').toString().trim().split('\n').length;

    process.stdout.write(new Array(len).join('1\n'));
}

main();
