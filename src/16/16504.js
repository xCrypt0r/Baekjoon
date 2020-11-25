/**
 * 16504. 종이접기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 44,492 KB
 * 소요 시간: 352 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input.shift();
    let sum = 0;

    input = input.map(x => x.split(' ').map(y => +y));

    for (let i = 0; i < N; i++) {
        for (let j = 0; j < N; j++) {
            sum += input[i][j];
        }
    }

    console.log(sum);
}

main();