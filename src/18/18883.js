/**
 * 18883. N M 찍기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 87,560 KB
 * 소요 시간: 484 ms
 * 해결 날짜: 2020년 12월 5일
 */

const fs = require('fs');

function main() {
    let [N, M] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let output = '';
    let arr = chunk(new Array(N * M).fill(0).map((v, i) => i + 1), M);

    for (let i = 0; i < N; i++) {
        output += arr[i].join(' ') + '\n';
    }

    process.stdout.write(output);
}

function chunk(arr, len) {
    let chunks = [],
        i = 0,
        n = arr.length;

    while (i < n) {
        chunks.push(arr.slice(i, i += len));
    }

    return chunks;
}

main();
