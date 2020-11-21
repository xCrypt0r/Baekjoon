/**
 * 17173. 배수들의 합
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,884 KB
 * 소요 시간: 180 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [[N, M], K] = [input[0].split(' ').map(x => +x), input[1].split(' ').map(x => +x)],
        sum = 0;

    for (let i = 2; i <= N; i++) {
        if (K.some(k => i % k === 0)) {
            sum += i;
        }
    }

    console.log(sum);
}

main();
