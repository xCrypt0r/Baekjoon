/**
 * 4740. 거울, 오! 거울
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,328 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

    for (let i = 0, len = input.length - 1; i < len; i++) {
        console.log(input[i].split('').reverse().join(''));
    }
}

main();