/**
 * 17826. 나의 학점은?
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,332 KB
 * 소요 시간: 144 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let i = input[0].split(' ').indexOf(input[1]) + 1,
        res;

    if (i <= 5) {
        res = 'A+';
    } else if (i >= 6 && i <= 15) {
        res = 'A0';
    } else if (i >= 16 && i <= 30) {
        res = 'B+';
    } else if (i >= 31 && i <= 35) {
        res = 'B0';
    } else if (i >= 36 && i <= 45) {
        res = 'C+';
    } else if (i >= 46 && i <= 48) {
        res = 'C0';
    } else {
        res = 'F';
    }

    console.log(res);
}

main();