/**
 * 9622. Cabin Baggage
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,504 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let t = +input.shift();
    let count = 0;

    for (let i = 0; i < t; i++) {
        let [length, width, depth, weight] = input[i].trim().split(/\s+/).map(x => +x);

        if (weight <= 7 && (length + width + depth <= 125 || (length <= 56 && width <= 45 && depth <= 25))) {
            output += '1\n';
            count++;
        } else {
            output += '0\n';
        }
    }

    output += count;

    process.stdout.write(output);
}

main();