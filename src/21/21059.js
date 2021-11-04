/**
 * 21059. Methodic Multiplication
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,988 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2021년 11월 4일
 */

const fs = require('fs');

function main() {
    let [x, y] = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let count = (x.split('S').length - 1) * (y.split('S').length - 1);

    console.log('S('.repeat(count) + '0' + ')'.repeat(count));
}

main();