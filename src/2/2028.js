/**
 * 2028. 자기복제수
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,608 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let a = input[i].toString(),
            b = Math.pow(input[i], 2).toString();

        console.log(b.slice(b.length - a.length) === a ? 'YES' : 'NO');
    }
}

main();