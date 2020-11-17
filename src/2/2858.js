/**
 * 2858. 기숙사 바닥
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,812 KB
 * 소요 시간: 192 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let [R, B] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let x = 0;

    for (let i = 3; i < 2000; i++) {
        for (let j = 3; j <= i; j++) {
            x = i * 2 + (j - 2) * 2;

            if  (x == R && i * j == x + B) {
                console.log(i, j);

                break;
            }
        }
    }
}

main();