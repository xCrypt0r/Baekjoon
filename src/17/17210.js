/**
 * 17210. 문문문
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,316 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let [N, method] = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => +x);

    if (N >= 6) {
        console.log('Love is open door');
    } else {
        for (let i = 1; i < N; i++) {
            console.log(++method % 2);
        }
    }
}

main();