/**
 * 5354. J박스
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,080 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 10월 14일
 */

const fs = require('fs');

function main() {
    let [T, ...sizes] = fs.readFileSync('/dev/stdin').toString().split('\n');

    for (let size of sizes) {
        if (size < 3) {
            for (let i = 0; i < size; i++) {
                console.log('#'.repeat(size));
            }

            console.log();
        } else {
            console.log('#'.repeat(size));

            for (let i = 0; i < size - 2; i++) {
                console.log(`#${'J'.repeat(size - 2)}#`);
            }

            console.log('#'.repeat(size) + '\n');
        }
    }
}

main();
