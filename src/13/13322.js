/**
 * 13322. 접두사 배열
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 18,700 KB
 * 소요 시간: 232 ms
 * 해결 날짜: 2020년 12월 11일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim(),
        output = '';

    for (let i = 0, len = input.length; i < len; i++) {
        output += i + '\n';
    }

    process.stdout.write(output);
}

main();
