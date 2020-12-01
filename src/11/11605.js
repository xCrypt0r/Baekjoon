/**
 * 11605. Magic Trick
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,496 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 12월 1일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').slice(1);
    let count = 0;

    input = input.map(x => {
        let temp = x.split(' ');

        return [temp[0], +temp[1]];
    });

    for (let i = 1; i < 101; i++) {
        let temp = i;

        for (let [operator, number] of input) {
            if (operator === 'ADD') {
                temp += number;
            } else if (operator === 'SUBTRACT') {
                temp -= number;
            } else if (operator === 'MULTIPLY') {
                temp *= number;
            } else {
                temp /= number;
            }

            if (temp < 0 || temp % 1) {
                count++;

                break;
            }
        }
    }

    console.log(count);
}

main();