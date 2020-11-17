/**
 * 20053. 최소, 최대 2
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 212,036 KB
 * 소요 시간: 1,204 ms
 * 해결 날짜: 2020년 11월 17일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift(),
        arr = [];

    for (let i = 0; i < T; i++) {
        let max = -1000000,
            min = 1000000;

        arr = input[(i << 1) + 1].split(' ').map(x => parseInt(x));

        for (let j = 0, len = arr.length; j < len; j++) {
            if (arr[j] < min) {
                min = arr[j];
            }

            if (arr[j] > max) {
                max = arr[j];
            }
        }

        console.log(min, max);
    }
}

main();