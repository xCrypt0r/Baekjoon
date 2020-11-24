/**
 * 2979. 트럭 주차
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,336 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 24일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [A, B, C] = input.shift().split(' ').map(x => +x);
    let count = new Array(101).fill(0),
        cost = 0;

    for (let i = 0; i < 3; i++) {
        let [start, end] = input[i].split(' ').map(x => +x);

        for (let t = start; t < end; t++) {
            count[t]++;
        }
    }

    for (let i = 1; i <= 100; i++) {
        cost += [0, A, B * 2, C * 3][count[i]];
    }

    console.log(cost);
}

main();