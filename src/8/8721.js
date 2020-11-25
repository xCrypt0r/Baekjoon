/**
 * 8721. Wykreślanka
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 81,084 KB
 * 소요 시간: 420 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let n = +input[0],
        a = input[1].split(' ').map(x => +x),
        res = 0,
        x = 0;

    for (let i = 0; i < n; i++) {
        a[i] === x + 1 ? x = a[i] : res++;
    }

    console.log(res);
}

main();