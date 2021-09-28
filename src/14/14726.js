/**
 * 14726. 신용카드 판별
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,656 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2021년 9월 29일
 */

const fs = require('fs');

function main() {
    let cards = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +cards.shift();
    let output = '';

    for (let i = 0; i < T; i++) {
        let card = cards[i];
        let tmp;
        let sum = 0;

        for (let j = 0, len = card.length; j < len; j++) {
            if (j % 2 == 0) {
                tmp = +card[j] * 2;

                if (tmp > 9) {
                    tmp = getSumOfDigits(tmp);
                }

                sum += tmp;
            } else {
                sum += +card[j];
            }
        }

        output += sum % 10 != 0 ? 'F\n' : 'T\n';
    }

    process.stdout.write(output);
}

function getSumOfDigits(num) {
    let sum = 0;

    while (num > 0) {
        sum += num % 10;
        num = Math.floor(num / 10);
    }

    return sum;
}

main();