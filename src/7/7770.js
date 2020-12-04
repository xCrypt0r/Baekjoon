/**
 * 7770. 아즈텍 피라미드
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,312 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 4일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString();
    let x = 0,
        h = 0;

    while (n >= x) {
        h++;
        x += h * h + (h - 1) * (h - 1);
    }

    if (n < x) {
        h--;
    }

    console.log(h);
}

main();