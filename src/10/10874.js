/**
 * 10874. 이교수님의 시험
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,452 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n');
    let N = +input.shift();

    input = input.map(x => x.split(' ').map(y => +y));

    for (let i = 0; i < N; i++) {
        if (input[i].every((v, j) => v === j % 5 + 1)) {
            console.log(i + 1);
        }
    }
}

main();
