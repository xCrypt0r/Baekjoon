/**
 * 7891. Can you add this?
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,572 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 12월 24일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let t = +input.shift();

    input = input.map(x => x.split(' ').map(y => +y));

    for (let i = 0; i < t; i++) {
        output += (input[i][0] + input[i][1]) + '\n';
    }

    process.stdout.write(output);
}

main();
