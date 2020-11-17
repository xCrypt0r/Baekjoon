/**
 * 14624. 전북대학교
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,372 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 2일
 */

const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString();

    if (N & 1) {
        let space = Math.floor(N / 2);

        console.log('*'.repeat(N));
        console.log(' '.repeat(space) + '*');

        for (let i = 1; i <= Math.floor(N / 2); i++) {
            console.log(' '.repeat(space - i) + '*' + ' '.repeat(N - space * 2 + i * 2 - 2) + '*');
        }
    } else {
        console.log('I LOVE CBNU');
    }
}

main();