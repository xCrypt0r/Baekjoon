/**
 * 11636. Stand on Zanzibar
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,272 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 12월 10일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let T = +input.shift();

    input = input.map(x => x.split(' ').map(y => +y));

    for (let i = 0; i < T; i++) {
        let first = input[i][0],
            res = 0,
            now = 0;

        for (let j = 1, len = input[i].length - 1; j < len; j++) {
            now = input[i][j];

            if (now > first * 2) {
                res += now - first * 2;
            }

            first = now;
        }

        output += res + '\n';
    }

    process.stdout.write(output);
}

main();
