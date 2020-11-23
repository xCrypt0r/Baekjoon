/**
 * 1233. 주사위
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,328 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let [a, b, c] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let count = new Array(a + b + c + 1).fill(0),
        max = 0;

    for (let i = 1; i <= a; i++) {
        for (let j = 1; j <= b; j++) {
            for (let k = 1; k <= c; k++) {
                count[i + j + k]++;
            }
        }
    }

    for (let i = 1, len = count.length - 1; i <= len; i++) {
        if (count[i] > max) {
            max = count[i];
        }
    }

    console.log(count.indexOf(max));
}

main();