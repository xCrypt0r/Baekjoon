/**
 * 10372. Alarm Clock
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,352 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString();
    let digit = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6];

    for (let i = 0; i < 24; i++) {
        for (let j = 0; j < 60; j++) {
            if (digit[i % 10] + digit[j % 10] + digit[~~(i / 10)] + digit[~~(j / 10)] === n) {
                console.log(`${pad(i)}:${pad(j)}`);

                return;
            }
        }
    }

    console.log('Impossible');
}

function pad(n, width = 2, z = '0') {
    n = n + '';

    return n.length >= width ? n : new Array(width - n.length + 1).join(z) + n;
}

main();