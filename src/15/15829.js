/**
 * 15829. Hashing
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,560 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 11월 29일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().split('\n')[1];
    let r = 31,
        mod = 1234567891;
    let hash = 0,
        temp = 1;

    for (let i = 0, len = s.length; i < len; i++) {
        hash += ((s.charCodeAt(i) - 96) * temp) % mod;
        temp *= r;
        temp %= mod;
    }

    console.log(hash % mod);
}

main();