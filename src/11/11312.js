/**
 * 11312. 삼각 무늬 - 2
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,080 KB
 * 소요 시간: 196 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let [A, B] = input[i].split(' ').map(x => +x);

        console.log((~~(A / B)) ** 2);
    }
}

main();