/**
 * 11970. Fence Painting
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,316 KB
 * 소요 시간: 208 ms
 * 해결 날짜: 2020년 12월 1일
 */

const fs = require('fs');

function main() {
    let [[a, b], [c, d]] = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));

    if (a >= c && a <= d || c >= a && c <= b) {
        console.log(Math.max(a, b, c, d) - Math.min(a, b, c, d));
    } else {
        console.log(b + d - a - c);
    }
}

main();