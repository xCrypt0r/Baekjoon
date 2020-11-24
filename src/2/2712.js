/**
 * 2712. 미국 스타일
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,276 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 24일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let [amount, unit] = input[i].split(' ');

        if (unit === 'kg') {
            amount *= 2.2046;
            unit = 'lb';
        } else if (unit === 'lb') {
            amount *= 0.4536;
            unit = 'kg';
        } else if (unit === 'l') {
            amount *= 0.2642;
            unit = 'g';
        } else if (unit === 'g') {
            amount *= 3.7854;
            unit = 'l';
        }

        output += amount.toFixed(4) + ' ' + unit + '\n';
    }

    process.stdout.write(output);
}

main();