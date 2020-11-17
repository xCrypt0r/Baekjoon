/**
 * 1075. 나누기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,716 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let [N, F] = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => +x);

    N = Math.floor(N / 100) * 100;

    for (let i = 0; i < 100; i++) {
        if ((N + i) % F === 0) {
            console.log((i + '').padStart(2, '0'));

            break;
        }
    }
}

main();
