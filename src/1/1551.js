/**
 * 1551. 수열의 변화
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,288 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 17일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let K = +input[0].split(' ')[1],
        A = input[1].split(',').map(x => +x);

    for (let i = 0; i < K; i++) {
        let temp = [];

        for (let j = 1, len = A.length; j < len; j++) {
            temp.push(A[j] - A[j - 1]);
        }

        A = temp;
    }

    process.stdout.write(A.join(','));
}

main();