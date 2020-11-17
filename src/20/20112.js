/**
 * 20112. 사토르 마방진
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,420 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 14일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input.shift(),
        isSator = true;

    input = input.map(line => line.split(''));

    for (let i = 0; i < N; i++) {
        for (let j = 0; j < N; j++) {
            if (input[i][j] !== input[j][i]) {
                isSator = false;

                break;
            }
        }
    }

    console.log(isSator ? 'YES' : 'NO');
}

main();