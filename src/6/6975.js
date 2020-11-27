/**
 * 6975. Deficient, Perfect, and Abundant
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,180 KB
 * 소요 시간: 180 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split(/\s+/).map(x => +x);
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let sum = 0,
            n = input[i];

        for (let j = 1; j < n; j++) {
            if (n % j === 0) {
                sum += j;
            }
        }

        console.log(n + ' is ' + (sum > n ? 'an abundant' : sum < n ? 'a deficient' : 'a perfect') + ' number.\n');
    }
}

main();