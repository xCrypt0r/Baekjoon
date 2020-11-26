/**
 * 8714. Monety
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 28,664 KB
 * 소요 시간: 280 ms
 * 해결 날짜: 2020년 11월 26일
 */

const fs = require('fs');

function main() {
    let count = fs.readFileSync('/dev/stdin').toString().trim().split('\n')[1].split(' ').reduce((res, v) => (res[+v]++, res), [0, 0]);

    console.log(count[0] + count[1] - Math.max(count[0], count[1]));
}

main();