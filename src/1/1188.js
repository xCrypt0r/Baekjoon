/**
 * 1188. 음식 평론가
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,312 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 12일
 */

const fs = require('fs');

function main() {
    let [N, M] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);

    console.log(M - gcd(N, M));
}

function gcd(a, b) {
    let res = 1,
        min = Math.min(a, b);

    for (let i = 2; i <= min; i++) {
        if (a % i === 0 && b % i === 0) {
            res = i;
        }
    }

    return res;
}

main();