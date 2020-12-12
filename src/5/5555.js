/**
 * 5555. 반지
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 12월 13일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let S = input.shift(),
        N = +input.shift();
    let count = 0;

    for (let i = 0, len = input.length; i < len; i++) {
        if (input[i].repeat(2).includes(S)) {
            count++;
        }
    }

    console.log(count);
}

main();
