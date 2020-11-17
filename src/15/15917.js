/**
 * 15917. 노솔브 방지문제야!!
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 194,668 KB
 * 소요 시간: 880 ms
 * 해결 날짜: 2020년 11월 6일
 */

const fs = require('fs');

function main() {
    let [Q, ...A] = fs.readFileSync('/dev/stdin').toString().split('\n').map(x => +x);
    let output = '';

    for (let i = 0; i < Q; i++) {
        output += (A[i] & (A[i] - 1) ? 0 : 1) + '\n';
    }

    process.stdout.write(output);
}

main();
