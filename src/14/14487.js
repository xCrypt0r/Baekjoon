/**
 * 14487. 욱제는 효도쟁이야!!
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 11,576 KB
 * 소요 시간: 196 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [n, v] = [+input[0], input[1].split(' ').map(x => +x)];
    let sum = 0,
        max = 0;

    for (let i = 0; i < n; i++) {
        sum += v[i];

        if (v[i] > max) {
            max = v[i];
        }
    }

    console.log(sum - max);
}

main();