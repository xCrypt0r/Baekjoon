/**
 * 6060. Wheel Rotation
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,984 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 10월 15일
 */

const fs = require('fs');

function main() {
    let [N, ...lines] = fs.readFileSync('/dev/stdin').toString().split('\n');
    let len = +N + 1;
    let X = new Array(len).fill(0),
        Y = new Array(len).fill(0);

    for (let i = 0; i < lines.length; i++) {
        let [S, D, C] = lines[i].split(' ').map(x => +x);

        X[S] = D;
        Y[S] = C;
    }

    let direction = 0,
        x = 1;

    for (let i = 0; i < N - 1; i++) {
        if (Y[x] == 1) {
            direction = 1 - direction;
        }

        x = X[x];
    }

    console.log(direction);
}

main();