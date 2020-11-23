/**
 * 2108. 통계학
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 76,048 KB
 * 소요 시간: 564 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input.shift();
    let sum = 0,
        count = new Array(8001).fill(0),
        maxCount = 0,
        max = [];

    input = input.map(x => +x);

    for (let x of input) {
        sum += x;
        count[x <= 0 ? Math.abs(x) : x + 4000]++;
    }

    for (let i = 0; i < 8001; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
        }
    }

    for (let i = 0; i < 8001; i++) {
        if (count[i] === maxCount) {
            max.push(i <= 4000 ? -i : i - 4000);
        }
    }

    input.sort((x, y) => x - y);
    max.sort((x, y) => x - y);

    console.log(Math.round(sum / N));
    console.log(input[~~(N / 2)]);
    console.log(max.length > 1 ? max[1] : max[0]);
    console.log(Math.abs(input[N - 1] - input[0]));
}

main();