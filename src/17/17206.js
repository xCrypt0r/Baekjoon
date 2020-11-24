/**
 * 17206. 준석이의 수학 숙제
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 30,248 KB
 * 소요 시간: 256 ms
 * 해결 날짜: 2020년 11월 24일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let T = +input[0],
        N = input[1].split(' ').map(x => +x);

    for (let i = 0; i < T; i++) {
        let n = N[i],
            a = Math.floor(n / 3),
            b = Math.floor(n / 7),
            c = Math.floor(n / 21);

        output += ((a * (a + 1) * 3 + b * (b + 1) * 7 - c * (c + 1) * 21) / 2) + '\n';
    }

    process.stdout.write(output);
}

main();