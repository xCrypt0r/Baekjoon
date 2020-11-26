/**
 * 4623. Copier Reduction
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,364 KB
 * 소요 시간: 144 ms
 * 해결 날짜: 2020년 11월 26일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

    for (let i = 0, len = input.length - 1; i < len; i++) {
        let [A, B, C, D] = input[i].split(' ').map(x => +x);

        if (B > A) {
            [A, B] = [B, A];
        }

        if (D > C) {
            [C, D] = [D, C];
        }

        console.log(Math.min(100, ~~(100 * Math.min(C / A, D / B))) + '%');
    }
}

main();