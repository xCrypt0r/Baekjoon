/**
 * 10811. 바구니 뒤집기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,484 KB
 * 소요 시간: 144 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, M] = input.shift().split(' ').map(x => +x),
        baskets = new Array(N + 1).fill(0).map((v, i) => i);

    for (let i = 0; i < M; i++) {
        let [a, b] = input[i].split(' ').map(x => +x);

        baskets.splice(a, b - a + 1, ...baskets.slice(a, b + 1).reverse());
    }

    baskets.shift();
    console.log(...baskets);
}

main();