/**
 * 5043. 정말 좋은 압축
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,312 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 2일
 */

const fs = require('fs');

function main() {
    let [N, b] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);

    console.log(N <= 2 ** (b + 1) - 1 ? 'yes' : 'no');
}

main();