/**
 * 17389. 보너스 점수
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,592 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim().split('\n')[1];
    let score = 0,
        bonus = 0;

    for (let i = 0, len = s.length; i < len; i++) {
        s[i] === 'O' ? score += i + bonus++ + 1 : bonus = 0;
    }

    console.log(score);
}

main();