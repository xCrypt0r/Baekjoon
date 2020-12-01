/**
 * 6322. 직각 삼각형의 두 변
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,352 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 1일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));

    for (let i = 0; i < input.length - 1; i++) {
        let [a, b, c] = input[i];

        console.log(`Triangle #${i + 1}`);

        if (a === -1) {
            if (b ** 2 >= c ** 2) {
                console.log('Impossible.');
            } else {
                console.log(`a = ${Math.sqrt(c ** 2 - b ** 2).toFixed(3)}`);
            }
        } else if (b === -1) {
            if (a ** 2 >= c ** 2) {
                console.log('Impossible.');
            } else {
                console.log(`b = ${Math.sqrt(c ** 2 - a ** 2).toFixed(3)}`);
            }
        } else if (c === -1) {
            console.log(`c = ${Math.sqrt(a ** 2 + b ** 2).toFixed(3)}`);
        }

        console.log();
    }
}

main();