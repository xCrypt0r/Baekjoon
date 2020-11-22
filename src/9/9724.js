/**
 * 9724. Perfect Cube
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,468 KB
 * 소요 시간: 148 ms
 * 해결 날짜: 2020년 11월 22일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    input = input.map(x => x.split(' ').map(y => +y));

    for (let i = 0; i < T; i++) {
        let [a, b] = input[i],
            count = Math.floor(Math.pow(b, 1 / 3)) - Math.ceil(Math.pow(a, 1 / 3)) + 1;

        console.log(`Case #${i + 1}: ${count}`);
    }
}

main();