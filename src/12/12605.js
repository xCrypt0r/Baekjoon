/**
 * 12605. 단어순서 뒤집기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,316 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input.shift();

    for (let i = 0; i < N; i++) {
        let s = input[i].split(' ').reverse().join(' ');

        console.log(`Case #${i + 1}: ${s}`);
    }
}

main();