/**
 * 6321. IBM 빼기 1
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,328 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 11월 17일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let n = +input.shift();

    for (let i = 0; i < n; i++) {
        console.log(`String #${i + 1}`);
        console.log(getNextAlphabet(input[i]));
        console.log();
    }
}

function getNextAlphabet(s) {
    let res = '';

    for (let i = 0, len = s.length; i < len; i++) {
        res += String.fromCharCode(((s.charCodeAt(i) - 65) + 1) % 26 + 65);
    }

    return res;
}

main();