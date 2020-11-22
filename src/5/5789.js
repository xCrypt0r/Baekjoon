/**
 * 5789. 한다 안한다
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,508 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let N = +input.shift();

    for (let i = 0; i < N; i++) {
        let s = input[i],
            mid = s.length / 2;

        output += (s[mid] === s[mid - 1] ? 'Do-it' : 'Do-it-Not') + '\n';
    }

    process.stdout.write(output);
}

main();