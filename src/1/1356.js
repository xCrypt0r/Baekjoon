/**
 * 1356. 유진수
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,312 KB
 * 소요 시간: 160 ms
 * 해결 날짜: 2020년 12월 9일
 */

const fs = require('fs');

function main() {
    let n = fs.readFileSync('/dev/stdin').toString().trim();

    for (let i = 1, len = n.length; i < len; i++) {
        let first = n.substr(0, i),
            second = n.substr(i);

        if (calc(first) === calc(second)) {
            console.log('YES');

            return;
        }
    }

    console.log('NO');
}

function calc(s) {
    let res = 1;

    for (let i = 0, len = s.length; i < len; i++) {
        res *= +s[i];
    }

    return res;
}

main();
