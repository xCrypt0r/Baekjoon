/**
 * 1292. 쉽게 푸는 문제
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let [A, B] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let sum = 0,
        index = 0;

    for (let i = 1; i <= 45; i++) {
        for (let j = 0; j < i; j++) {
            index++;

            if (index >= A && index <= B) {
                sum += i;
            }

            if (index === B) {
                break;
            }
        }

        if (index === B) {
            break;
        }
    }

    console.log(sum);
}

main();