/**
 * 2765. 자전거 속도
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,352 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));

    for (let i = 0, len = input.length; i < len; i++) {
        let [diameter, rotation, time] = input[i];

        if (rotation === 0) {
            break;
        }

        let distance = Math.PI * diameter * rotation / 63360,
            mph = distance * 3600 / time;

        console.log(`Trip #${i + 1}: ${distance.toFixed(2)} ${mph.toFixed(2)}`);
    }
}

main();