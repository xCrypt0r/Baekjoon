/**
 * 11648. 지속
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,580 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString(),
        count = 0;

    while (n > 9) {
        count++;
        n = multiplyEachDigit(n);
    }

    console.log(count);
}

function multiplyEachDigit(n) {
    let res = 1;

    n = n.toString().split('');

    for (let i = 0, len = n.length; i < len; i++) {
        res *= +n[i];
    }

    return res;
}

main();