/**
 * 1475. 방 번호
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,320 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 2일
 */

const fs = require('fs');

function main() {
    let N = fs.readFileSync('/dev/stdin').toString().trim();
    let count = new Array(10).fill(0),
        maxCount = 0;

    N.split('').map(x => +x).forEach(x => count[x]++);

    count[6] = Math.ceil((count[6] + count[9]) / 2);

    for (let i = 0; i < 9; i++) {
        maxCount = Math.max(maxCount, count[i]);
    }

    console.log(maxCount);
}

main();
