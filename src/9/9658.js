/**
 * 9658. 돌 게임 4
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,364 KB
 * 소요 시간: 192 ms
 * 해결 날짜: 2020년 12월 12일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString();

    console.log('LWLWWWW'[(n - 1) % 7] === 'W' ? 'SK' : 'CY');
}

main();