/**
 * 6763. Speed fines are not fine!
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,700 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 6일
 */

const fs = require('fs');

function main() {
    let [limit, speed] = fs.readFileSync('/dev/stdin').toString().split('\n').map(x => +x);
    let excess = speed - limit;

    if (excess <= 0) {
        console.log('Congratulations, you are within the speed limit!');
    } else if (excess <= 20) {
        console.log('You are speeding and your fine is $100.');
    } else if (excess <= 30) {
        console.log('You are speeding and your fine is $270.');
    } else {
        console.log('You are speeding and your fine is $500.');
    }
}

main();
