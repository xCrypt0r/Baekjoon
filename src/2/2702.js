/**
 * 2702. 초6 수학
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,796 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 11월 14일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();
    let output = '';

    input = input.map(line => line.split(' ').map(x => +x));

    for (let i = 0; i < T; i++) {
        let [a, b] = input[i],
            g = gcd(a, b);

        output += a * b / g + ' ' + g + '\n';
    }

    process.stdout.write(output);
}

function gcd(x, y) {
    return y ? gcd(y, x % y) : Math.abs(x);
}

main();