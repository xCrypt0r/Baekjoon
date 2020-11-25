/**
 * 18247. 겨울왕국 티켓 예매
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,364 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let [N, M] = input[i].split(' ').map(x => +x);

        console.log(N < 12 || M < 4 ? -1 : M * 11 + 4);
    }
}

main();