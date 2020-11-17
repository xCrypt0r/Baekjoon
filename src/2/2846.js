/**
 * 2846. 오르막길
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,612 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input[0],
        P = input[1].split(' ').map(x => +x);
    let flag = false,
        prev = P[0],
        start = P[0],
        max = 0;

    for (let i = 1; i < N; i++) {
        if (P[i] > prev) {
            flag = true;
        } else {
            flag = false;
            start = P[i];
        }

        if (flag) {
            let len = P[i] - start;
            if (len > max) {
                max = len;
            }
        }

        prev = P[i];
    }

    console.log(max);
}

main();
