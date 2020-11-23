/**
 * 4564. 숫자 카드놀이
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,648 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => +x);

    for (let i = 0, len = input.length - 1; i < len; i++) {
        let n = input[i],
            memo = [n],
            res = 1;

        while (n > 9) {
            n.toString().split('').forEach(digit => res *= +digit);
            memo.push(res);

            n = res;
            res = 1;
        }

        console.log(memo.join(' '));
    }
}

main();