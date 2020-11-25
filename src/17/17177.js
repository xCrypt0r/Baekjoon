/**
 * 17177. 내접사각형 만들기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let [a, b, c] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let r1 = a * a - b * b,
        r2 = a * a - c * c,
        d = (Math.sqrt(r1 * r2) - b * c) / a;

    console.log(d > 0 ? d : -1);
}

main();