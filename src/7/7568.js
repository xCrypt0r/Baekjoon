/**
 * 7568. 덩치
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,304 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2021년 10월 24일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input.shift();
    let ranks = Array(N).fill(1);

    input = input.map(x => x.split(' ').map(y => +y));

    for (let i = 0; i < N; i++) {
        for (let j = 0; j < N; j++) {
            if (i !== j && input[i][0] > input[j][0] && input[i][1] > input[j][1]) {
                ranks[j]++;
            }
        }
    }

    console.log(ranks.join(' '));
}

main();