/**
 * 19572. 가뭄(Small)
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,328 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let [d1, d2, d3] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let b = (d1 + d3 - d2) / 2,
        a = d1 - b,
        c = d3 - b;

    if (Math.min(a, b, c) > 0) {
        console.log(1);
        console.log(a.toFixed(1), b.toFixed(1), c.toFixed(1));
    } else {
        console.log(-1);
    }
}

main();