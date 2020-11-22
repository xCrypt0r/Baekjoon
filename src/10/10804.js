/**
 * 10804. 카드 역배치
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,320 KB
 * 소요 시간: 156 ms
 * 해결 날짜: 2020년 11월 22일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));
    let cards = [];

    for (let i = 1; i <= 20; i++) {
        cards.push(i);
    }

    for (let i = 0; i < 10; i++) {
        let [a, b] = input[i],
            temp = cards.slice(a - 1, b).reverse();

        for (let j = a - 1; j < b; j++) {
            cards[j] = temp[j - a + 1];
        }
    }

    console.log(cards.join(' '));
}

main();