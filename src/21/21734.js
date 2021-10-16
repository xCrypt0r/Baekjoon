/**
 * 21734. SMUPC의 등장
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,320 KB
 * 소요 시간: 148 ms
 * 해결 날짜: 2021년 10월 16일
 */

const fs = require('fs');

function main() {
    let S = fs.readFileSync('/dev/stdin').toString().trim();

    for (let i = 0; i < S.length; i++) {
        console.log(S[i].repeat(getSumOfDigits(S.charCodeAt(i))));
    }
}

function getSumOfDigits(num) {
    let sum = 0;

    while (num > 0) {
        sum += num % 10;
        num = Math.floor(num / 10);
    }

    return sum;
}

main();