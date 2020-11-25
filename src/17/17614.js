/**
 * 17614. 369
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,296 KB
 * 소요 시간: 236 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString();
    let count = 0;

    for (let i = 1; i <= N; i++) {
        let n = i;

        while (n > 0) {
            let r = n % 10;

            if (r === 3 || r === 6 || r === 9) {
                count++;
            }

            n = Math.floor(n / 10);
        }
    }

    console.log(count);
}

main();