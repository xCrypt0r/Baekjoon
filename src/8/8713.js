/**
 * 8713. Znak działania
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,312 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let [a, b] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let res = [a + b, a - b, a * b],
        max = -Infinity,
        maxIndex = -1,
        maxCount = 0;

    for (let i = 0; i < 3; i++) {
        if (res[i] > max) {
            max = res[i];
            maxIndex = i;
        }
    }

    for (let i = 0; i < 3; i++) {
        if (res[i] === max) {
            maxCount++;
        }
    }

    if (maxCount > 1) {
        console.log('NIE');
    } else {
        console.log(`${pad(a)}${['+', '-', '*'][maxIndex]}${pad(b)}=${pad(max)}`);
    }
}

function pad(n) {
    return n < 0 ? '(' + n + ')' : n;
}

main();