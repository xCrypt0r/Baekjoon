/**
 * 4619. 루트
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,364 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));

    for (let i = 0, len = input.length - 1; i < len; i++) {
        let [B, N] = input[i],
            A = Math.pow(B, 1 / N),
            a1 = ~~A,
            a2 = a1 + 1,
            res1 = Math.abs(B - Math.pow(a1, N)),
            res2 = Math.abs(B - Math.pow(a2, N));

        console.log(res1 < res2 ? a1 : a2);
    }
}

main();