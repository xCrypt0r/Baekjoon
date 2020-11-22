/**
 * 13304. 방 배정
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,552 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 23일
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

    room += Math.ceil((count[0][0] + count[0][1] + count[1][0] + count[1][1]) / K);

    for (let i = 1; i < 3; i++) {
        room += Math.ceil((count[i * 2][0] + count[i * 2 + 1][0]) / K);
        room += Math.ceil((count[i * 2][1] + count[i * 2 + 1][1]) / K);
    }

    console.log(room);
}

main();