/**
 * 10409. 서버
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,316 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 4일
 */

const fs = require('fs');

function main() {
    let [[n, t], T] = fs.readFileSync('/dev/stdin').toString().split('\n').map(x => x.split(' ').map(x => +x));
    let count = 0;

    while (T[0] && t >= T[0]) {
        t -= T.shift();
        count++;
    }

    console.log(count);
}

main();