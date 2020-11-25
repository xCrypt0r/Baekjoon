/**
 * 14790. Tidy Numbers (Small)
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,732 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let [T, ...N] = fs.readFileSync('/dev/stdin').toString().split('\n').map(x => +x);

    for (let i = 0; i < T; i++) {
        for (let j = N[i]; j > 0; j--) {
            if (isTidy(j)) {
                console.log(`Case #${i + 1}: ${j}`);

                break;
            }
        }
    }
}

function isTidy(n, prev = 10) {
    if (n > 0) {
        if (n % 10 > prev) {
            return false;
        }

        return isTidy(Math.floor(n / 10), n % 10);
    }

    return true;
}

main();