/**
 * 2774. 아름다운 수
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,272 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let N = +input.shift();

    for (let i = 0; i < N; i++) {
        output += new Set(input[i]).size + '\n';
    }

    process.stdout.write(output);
}

main();