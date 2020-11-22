/**
 * 7015. Millennium
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 10,016 KB
 * 소요 시간: 192 ms
 * 해결 날짜: 2020년 11월 22일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let n = +input.shift();


    for (let i = 0; i < n; i++) {
        let [y, m, d] = input[i].split(' ').map(x => +x),
            count = (y % 3 === 0 ? 20 : 19) - d + 1;

        for (let i = m; i <= 9; i++) {
            count += y % 3 === 0 ? 20 : i % 2 ? 20 : 19;
        }

        for (let i = y + 1; i <= 999; i++) {
            count += i % 3 ? 195 : 200;
        }

        console.log(count);
    }
}

main();