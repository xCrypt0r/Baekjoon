/**
 * 11606. Egg Drop
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,352 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 12월 1일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [n, k] = input.shift().split(' ').map(x => +x);
    let max = 1,
        min = k;

    for (let i = 0; i < n; i++) {
        let [number, status] = input[i].split(' ');

        number = +number;

        if (status === 'SAFE') {
            max = Math.max(max, number);
        } else if (status === 'BROKEN') {
            min = Math.min(min, number);
        }
    }

    console.log(max + 1, min - 1);
}

main();