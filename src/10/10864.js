/**
 * 10864. 친구
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,564 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, M] = input.shift().split(' ').map(x => +x),
        count = new Array(N + 1).fill(0);

    input = input.map(x => x.split(' ').map(y => +y));

    for (let i = 0; i < M; i++) {
        let [a, b] = input[i];

        count[a]++;
        count[b]++;
    }

    console.log(count.slice(1).join('\n'));
}

main();