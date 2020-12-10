/**
 * 15296. Sum Squared Digits Function
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,780 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 12월 10일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n'),
        output = '';
    let P = +input.shift();

    input = input.map(x => x.split(' ').map(y => +y));

    for (let i = 0; i < P; i++) {
        let [K, b, n] = input[i];
        let SSD = 0;

        while (n > 0) {
            SSD += (n % b) * (n % b);
            n = ~~(n / b);
        }

        output += `${K} ${SSD}\n`;
    }

    process.stdout.write(output);
}

main();