/**
 * 10448. 유레카 이론
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,484 KB
 * 소요 시간: 256 ms
 * 해결 날짜: 2020년 11월 24일
 */

const fs = require('fs');
let memo = [];

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    for (let i = 1; i < 45; i++) {
        memo[i - 1] = i * (i + 1) / 2;
    }

    for (let i = 0; i < T; i++) {
        console.log(isEureka(+input[i]));
    }
}

function isEureka(n) {
    for (let x = 0; x < 44; x++) {
        for (let y = 0; y < 44; y++) {
            for (let z = 0; z < 44; z++) {
                if (memo[x] + memo[y] + memo[z] === n) {
                    return 1;
                }
            }
        }
    }

    return 0;
}

main();