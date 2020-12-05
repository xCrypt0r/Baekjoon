/**
 * 4388. 받아올림
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,264 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 12월 5일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y)),
        output = '';

    for (let i = 0, len = input.length - 1; i < len; i++) {
        let [a, b] = input[i],
            carry = false,
            count = 0;

        while (a > 0 || b > 0) {
            let x = a % 10,
                y = b % 10;

            if (carry) {
                x++;
                carry = false;
            }

            if (x + y > 9) {
                carry = true;
                count++;
            }

            a = ~~(a / 10);
            b = ~~(b / 10);
        }

        output += count + '\n';
    }

    process.stdout.write(output);
}

main();
