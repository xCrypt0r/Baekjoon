/**
 * 5692. 팩토리얼 진법
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 27,332 KB
 * 소요 시간: 256 ms
 * 해결 날짜: 2020년 12월 3일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';

    for (let i = 0, limit = input.length - 1; i < limit; i++) {
        let sum = 0;

        for (let j = 0, len = input[i].length; j < len; j++) {
            sum += +input[i][j] * factorial(len - j);
        }

        output += sum + '\n';
    }

    process.stdout.write(output);
}

function factorial(n) {
    let res = 1;

    for (let i = 2; i <= n; i++) {
        res *= i;
    }

    return res;
}

main();