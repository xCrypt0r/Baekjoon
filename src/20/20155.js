/**
 * 20155. 우리 집 밑에 편의점이 있는데
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,376 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 18일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, M] = input[0].split(' ').map(x => +x),
        X = input[1].split(' ').map(x => +x);
    let count = new Array(N + 1).fill(0);

    for (let i = 0; i < N; i++) {
        count[X[i]]++;
    }

    let max = 0;

    for (let i = 1; i <= M; i++) {
        if (count[i] > max) {
            max = count[i];
        }
    }

    console.log(max);
}

main();