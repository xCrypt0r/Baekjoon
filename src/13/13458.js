/**
 * 13458. 시험 감독
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 115,768 KB
 * 소요 시간: 512 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = parseInt(input[0]);
    let A = input[1].split(' ').map(x => parseInt(x));
    let [B, C] = input[2].split(' ').map(x => parseInt(x));
    let count = N;

    for (let i = 0; i < N; i++) {
        A[i] -= B;

        if (A[i] > 0) {
            count += Math.ceil(A[i] / C);
        }
    }

    console.log(count);
}

main();
