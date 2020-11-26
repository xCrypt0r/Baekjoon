/**
 * 6609. 모기곱셈
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 14,116 KB
 * 소요 시간: 336 ms
 * 해결 날짜: 2020년 11월 26일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

    for (let i = 0, len = input.length; i < len; i++) {
        let [M, P, L, E, R, S, N] = input[i].split(' ').map(x => +x);

        while (N-- > 0) {
            [M, P, L] = [~~(P / S), ~~(L / R), M * E];
        }

        console.log(M);
    }
}

main();