/**
 * 6491. Perfection
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,040 KB
 * 소요 시간: 184 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let A = fs.readFileSync('/dev/stdin').toString().trim().split(/\s+/).map(x => +x).reduce((res, v) => res.concat(v), []),
        output = '';

    for (let i = 0, len = A.length - 1; i < len; i++) {
        let sum = 0,
            n = A[i];

        for (let j = 1; j < n; j++) {
            if (n % j === 0) {
                sum += j;
            }
        }

        output += n + ' ' + (sum > n ? 'ABUNDANT' : sum < n ? 'DEFICIENT' : 'PERFECT') + '\n';
    }

    process.stdout.write(output);
}

main();