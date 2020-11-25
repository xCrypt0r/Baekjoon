/**
 * 14593. 2017 아주대학교 프로그래밍 경시대회 (Large)
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,340 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input.shift();

    input = input
        .map((x, i) => {
            x = x.split(' ').map(y => +y);

            x.push(i + 1);

            return x;
        })
        .sort((x, y) => {
            if (x[0] !== y[0]) {
                return x[0] > y[0] ? -1 : 1;
            } else if (x[1] !== y[1]) {
                return x[1] < y[1] ? -1 : 1;
            } else {
                return x[2] < y[2] ? -1 : 1;
            }
        });

    console.log(input[0][3]);
}

main();