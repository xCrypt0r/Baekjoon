/**
 * 4806. 줄 세기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,320 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

    if (input[input.length - 1] === '') {
        input.length -= 1;
    }

    console.log(input.length);
}

main();