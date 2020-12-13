/**
 * 2870. 수학숙제
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,384 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 12월 13일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n');
    let N = +input.shift();
    let numbers = [],
        rgx = /\d+/g;

    for (let i = 0; i < N; i++) {
        input[i].match(rgx)?.forEach(n => {
            numbers.push(BigInt(n));
        });
    }

    console.log(
        numbers
            .sort((a, b) => a > b ? 1 : -1)
            .join('\n')
    );
}

main();
