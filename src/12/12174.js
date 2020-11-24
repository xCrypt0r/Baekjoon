/**
 * 12174. #include <Google I/O.h>
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 10,952 KB
 * 소요 시간: 152 ms
 * 해결 날짜: 2020년 11월 24일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input[0],
        rgx = /\d{8}/g;

    for (let i = 1; i <= T; i++) {
        let s = replaceAlphabet(input[i << 1]);

        console.log(`Case #${i}: ${binaryArrayToString(s.match(rgx))}`);
    }
}

function replaceAlphabet(s) {
    return s.replace(/O/g, '0').replace(/I/g, '1');
}

function binaryArrayToString(arr) {
    return String.fromCharCode(...arr.map(b => parseInt(b, 2)));
}

main();