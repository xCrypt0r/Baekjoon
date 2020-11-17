/**
 * 2869. 달팽이는 올라가고 싶다
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let [A, B, V] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);

    console.log(Math.ceil((V - B) / (A - B)));
}

main();
