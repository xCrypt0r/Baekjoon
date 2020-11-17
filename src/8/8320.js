/**
 * 8320. 직사각형을 만드는 방법
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,792 KB
 * 소요 시간: 196 ms
 * 해결 날짜: 2020년 11월 13일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString(),
        count = 0;
    
    for (let i = 1; i <= n; i++) {
        for (let j = i; i * j <= n; j++) {
            count++;
        }
    }

    console.log(count);
}

main();
