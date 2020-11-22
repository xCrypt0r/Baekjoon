/**
 * 12813. 이진수 연산
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 40,660 KB
 * 소요 시간: 316 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let [A, B] = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        len = A.length,
        output = '';

    for (let i = 0; i < len; i++) {
        output += A[i] === '1' && B[i] === '1' ? '1' : '0';
    }

    output += '\n';

    for (let i = 0; i < len; i++) {
        output += A[i] === '1' || B[i] === '1' ? '1' : '0';
    }

    output += '\n';

    for (let i = 0; i < len; i++) {
        output += A[i] != B[i] ? '1' : '0';
    }

    output += '\n';

    for (let i = 0; i < len; i++) {
        output += A[i] === '1' ? '0' : '1';
    }

    output += '\n';

    for (let i = 0; i < len; i++) {
        output += B[i] === '1' ? '0' : '1';
    }

    process.stdout.write(output);
}

main();
