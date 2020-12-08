/**
 * 3181. 줄임말 만들기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,708 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 12월 8일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim().split(' ');
    let trash = ['i', 'pa', 'te', 'ni', 'niti', 'a', 'ali', 'nego', 'no', 'ili'];
    let output = s
        .filter((word, i) => i === 0 || trash.indexOf(word) === -1)
        .map(word => word[0].toUpperCase())
        .join('');

    console.log(output);
}

main();
