/**
 * 19155. Copying Homework
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 30,876 KB
 * 소요 시간: 252 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, A] = [+input[0], input[1].split(' ').map(x => +x)];
    let max = Math.max(...A),
        res = [];

    for (let a of A) {
        res.push(max - a + 1);
    }

    console.log(res.join(' '));
}

main();