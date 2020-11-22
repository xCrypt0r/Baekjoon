/**
 * 10695. Dalia
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,488 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 22일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let [, r1, c1, r2, c2] = input[i].split(' ').map(x => +x);

        console.log(`Case ${i + 1}: ${Math.abs((r1 - r2) * (c1 - c2)) === 2 ? 'YES' : 'NO'}`);
    }
}

main();