/**
 * 16341. Horsemeet
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,304 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let [[A, B], [C, D]] = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));
    let x = Math.abs(A - C),
        y = Math.abs(B - D);

    if (x % 2 === 0) {
        console.log(y & 1 ? 'white' : 'black');
    } else {
        console.log(y & 1 ? 'black' : 'white');
    }
}

main();