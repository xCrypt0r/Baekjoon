/**
 * 4655. Hangover
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,328 KB
 * 소요 시간: 176 ms
 * 해결 날짜: 2020년 12월 4일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => +x),
        output = '';

    for (let i = 0, len = input.length - 1; i < len; i++) {
        let n = 0,
            c = 2;

        while (n < input[i]) {
            n += 1 / c;
            c++;
        }

        output += `${c - 2} card(s)\n`;
    }

    process.stdout.write(output);
}

main();