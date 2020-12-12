/**
 * 12871. 무한 문자열
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,332 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 12월 13일
 */

const fs = require('fs');

function main() {
    let [a, b] = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let x = a.length,
        y = b.length,
        g = gcd(x, y);

    a = a.repeat(~~(y / g));
    b = b.repeat(~~(x / g));

    console.log(+(a === b));
}

function gcd(x, y) {
    return y ? gcd(y, x % y) : Math.abs(x);
}

main();
