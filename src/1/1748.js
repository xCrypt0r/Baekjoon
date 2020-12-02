/**
 * 1748. 수 이어 쓰기 1
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,572 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 2일
 */

const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString();
    let len = (N + '').length;
    let count = 0;

    for (let i = 0; i < len - 1; i++) {
        count += Math.pow(10, i) * (i + 1) * 9;
    }

    count += len * (N - Math.pow(10, len - 1) + 1);

    console.log(count);
}

main();
