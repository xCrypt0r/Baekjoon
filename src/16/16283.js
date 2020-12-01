/**
 * 16283. Farm
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,568 KB
 * 소요 시간: 144 ms
 * 해결 날짜: 2020년 12월 1일
 */

const fs = require('fs');

function main() {
    let [a, b, n, w] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let res = [];

    for (let i = 1; i < n; i++) {
        if (a * i + b * (n - i) === w) {
            res.push(i);
        }
    }

    if (res.length === 1) {
        console.log(res[0], n - res[0]);
    } else {
        console.log(-1);
    }
}

main();