/**
 * 13224. Chop Cup
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,340 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 12월 10일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('');
    let cups = [1, 0, 0];

    input.forEach(x => {
        if (x === 'A') {
            [cups[0], cups[1]] = [cups[1], cups[0]];
        } else if (x === 'B') {
            [cups[1], cups[2]] = [cups[2], cups[1]];
        } else if (x === 'C') {
            [cups[0], cups[2]] = [cups[2], cups[0]];
        }
    });


    console.log(cups.indexOf(1) + 1);
}

main();