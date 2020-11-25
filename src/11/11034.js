/**
 * 11034. 캥거루 세마리2
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,348 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

    for (let i = 0, len = input.length; i < len; i++) {
        let [a, b, c] = input[i].split(' ').map(x => +x);

        console.log(Math.max(b - a, c - b) - 1);
    }
}

main();