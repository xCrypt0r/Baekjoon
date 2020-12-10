/**
 * 12344. Moist (Small1)
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,532 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 12월 10일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let N = +input.shift();
        let names = [],
            count = 0;

        for (let j = 0; j < N; j++) {
            let name = input.shift();

            names.push(name);
            names.sort();

            if (names[names.length - 1] !== name) {
                count++;
            }
        }

        output += `Case #${i + 1}: ${count}\n`;
    }

    process.stdout.write(output);
}

main();