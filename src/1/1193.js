/**
 * 1193. 분수찾기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,304 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 22일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString();
    let i = 0,
        sum = 0;

    while (sum + i < n) {
        sum += i++;
    }

    let a = i & 1 ? i - n + sum + 1 : n - sum,
        b = i - a + 1;

    console.log(`${a}/${b}`);
}

main();