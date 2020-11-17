/**
 * 13300. 방 배정
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,576 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 11월 13일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, K] = input.shift().split(' ').map(x => +x),
        count = [[0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0]],
        room = 0;

    for (let i = 0; i < N; i++) {
        let [S, Y] = input[i].split(' ').map(x => +x);

        count[Y - 1][S]++;
    }

    count.forEach(([f, m]) => {
        room += Math.ceil(f / K) + Math.ceil(m / K);
    });

    console.log(room);
}

main();
