/**
 * 15819. 너의 핸들은
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,312 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 15일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, I] = input.shift().split(' ').map(x => +x);

    console.log(input.sort()[I - 1]);
}

main();