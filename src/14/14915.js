/**
 * 14915. 진수 변환기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,308 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let [m, n] = fs.readFileSync('/dev/stdin').toString().split(' ').map(x => +x);
    let output = '',
        num = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'A', 'B', 'C', 'D', 'E', 'F'];

    while (m > 0) {
        output = num[m % n] + output;
        m = Math.floor(m / n);
    }

    console.log(output || '0');
}

main();