/**
 * 13129. Disposable Cup
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,844 KB
 * 소요 시간: 148 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let [A, B, N] = fs.readFileSync('/dev/stdin').toString().split(' ').map(x => +x),
        output = [];

    for (let i = 1; i <= N; i++) {
        output.push(A * N + B * i);
    }

    console.log(...output);
}

main();