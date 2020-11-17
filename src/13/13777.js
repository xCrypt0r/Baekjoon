/**
 * 13777. Hunt The Rabbit
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,148 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 10월 15일
 */

const fs = require('fs');

function main() {
    let numbers = fs.readFileSync('/dev/stdin').toString().split('\n').map(x => +x);

    for (let i = 0; i < numbers.length; i++) {
        if (numbers[i] == 0) {
            break;
        }

        let [start, end] = [1, 50];
        let output = [];

        while (start <= end) {
            let middle = Math.floor((start + end) / 2);

            output.push(middle);

            if (middle > numbers[i]) {
                end = middle - 1;
            } else if (middle < numbers[i]) {
                start = middle + 1;
            } else {
                break;
            }
        }

        console.log(output.join(' '));
    }
}

main();
