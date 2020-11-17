/**
 * 2863. 이게 분수?
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,328 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 11월 4일
 */

const fs = require('fs');

function main() {
    let lines = fs.readFileSync('/dev/stdin').toString().split('\n');
    let [a, b] = lines[0].split(' '),
        [c, d] = lines[1].split(' ');
    let res = [a / c + b / d, c / d + a / b, d / b + c / a, b / a + d / c];

    console.log(res.indexOf(Math.max(...res)));
}

main();