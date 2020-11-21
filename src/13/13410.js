/**
 * 13410. 거꾸로 구구단
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,740 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let [N, K] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let max = 0;

    for (let i = 1; i <= K; i++) {
        let num = reverse(N * i);

        if (num > max) {
            max = num;
        }
    }

    console.log(max);
}

function reverse(n) {
    return +n.toString().split('').reverse().join('');
}

main();
