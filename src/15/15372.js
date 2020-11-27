/**
 * 15372. A Simple Problem.
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 62,984 KB
 * 소요 시간: 368 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let [T, ...N] = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => +x),
        output = '';

    for (let i = 0; i < T; i++) {
        output += N[i] ** 2 + '\n';
    }

    process.stdout.write(output);
}

main();