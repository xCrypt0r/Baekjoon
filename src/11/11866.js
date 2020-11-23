/**
 * 11866. 요세푸스 문제 0
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 11,580 KB
 * 소요 시간: 224 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let [N, K] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let queue = new Array(N).fill(0).map((v, i) => i + 1),
        josephus = [];

    while (queue.length > 0) {
        for (let i = 0; i < K - 1; i++) {
            queue.push(queue.shift());
        }

        josephus.push(queue.shift());
    }

    console.log(`<${josephus.join(', ')}>`);
}

main();