/**
 * 1350. 진짜 공간
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,616 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input[0],
        files = input[1].split(' ').map(x => +x),
        cluster = +input[2];
    let size = 0;

    for (let i = 0, len = files.length; i < len; i++) {
        size += cluster * Math.ceil(files[i] / cluster);
    }

    console.log(size);
}

main();