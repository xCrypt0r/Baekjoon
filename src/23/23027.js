/**
 * 23027. 1번부터 문제의 상태가…?
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,336 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2021년 10월 15일
 */

const fs = require('fs');

function main() {
    let S = fs.readFileSync('/dev/stdin').toString().trim();

    if (S.includes('A')) {
        S = S.replace(/[BCDF]/g, 'A');
    } else if (S.includes('B')) {
        S = S.replace(/[CDF]/g, 'B');
    } else if (S.includes('C')) {
        S = S.replace(/[DF]/g, 'C');
    } else {
        S = S.replace(/./g, 'A');
    }

    console.log(S);
}

main();
