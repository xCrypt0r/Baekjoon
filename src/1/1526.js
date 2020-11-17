/**
 * 1526. 가장 큰 금민수
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,264 KB
 * 소요 시간: 208 ms
 * 해결 날짜: 2020년 11월 15일
 */

const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString();

    for (let i = N; i > 0; i--) {
        if (is47(i)) {
            console.log(i);

            break;
        }
    }
}

function is47(n) {
    while (n) {
        let digit = n % 10;

        if (digit !== 4 && digit !== 7) {
            return false;
        }

        n = Math.floor(n / 10);
    }

    return true;
}

main();