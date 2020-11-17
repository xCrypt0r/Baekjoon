/**
 * 6378. 디지털 루트
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,064 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 10월 14일
 */

const fs = require('fs');

function main() {
    let numbers = fs.readFileSync('/dev/stdin').toString().split('\n');
    let res = [];

    for (let number of numbers) {
        if (number == '0') {
            break;
        }

        let digital = 0;

        for (let i = 0; i < number.length; i++) {
            digital += number[i] - '0';
        }

        while (digital >= 10) {
            let temp = digital;

            digital = 0;

            for (; temp > 0; temp = Math.floor(temp / 10)) {
                digital += temp % 10;
            }
        }

        res.push(digital);
    }

    console.log(res.join('\n'));
}

main();