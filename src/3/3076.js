/**
 * 3076. 상근이의 체스판
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,524 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let [[R, C], [A, B]] = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));
    let output = '';

    for (let i = 0; i < R; i++) {
        for (let j = 0; j < A; j++) {
            for (let k = 0; k < C; k++) {
                for (let l = 0; l < B; l++) {
                    output += (i + k) & 1 ? '.' : 'X';
                }
            }

            output += '\n';
        }
    }

    process.stdout.write(output);
}

main();
