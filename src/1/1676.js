/**
 * 1676. 팩토리얼 0의 개수
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,332 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString();
    let count = 0;

    for (let i = 5; i <= N; i++) {
        if (i % 5 === 0) {
            count++;
        }

        if (i % 25 === 0) {
            count ++;
        }

        if (i % 125 === 0) {
            count++;
        }
    }

    console.log(count);
}

main();