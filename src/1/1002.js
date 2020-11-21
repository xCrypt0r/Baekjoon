/**
 * 1002. 터렛
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,532 KB
 * 소요 시간: 168 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let [x1, y1, r1, x2, y2, r2] = input[i].split(' ').map(x => +x);
        let d = Math.pow(x2 - x1, 2) + Math.pow(y2 - y1, 2),
            sum = Math.pow(r1 + r2, 2),
            diff = Math.pow(r1 - r2, 2);

        if (d === 0) {
            console.log(diff === 0 ? -1 : 0);
        } else if (d === sum || d === diff) {
            console.log(1);
        } else if (d > diff && d < sum) {
            console.log(2);
        } else {
            console.log(0);
        }
    }
}

main();