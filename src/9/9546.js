/**
 * 9546. 3000번 버스
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,272 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let count = 0;

        for (let j = 0, k = input[i]; j < k; j++) {
            count = (count + 0.5) * 2;
        }

        output += count + '\n';
    }

    process.stdout.write(output);
}

main();
