/**
 * 11728. 배열 합치기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 391,724 KB
 * 소요 시간: 1,496 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let [A, B] = fs.readFileSync('/dev/stdin').toString().trim().split('\n').slice(1).map(x => x.split(' ').map(y => +y));

    console.log(A.concat(B).sort((x, y) => x - y).join(' '));
}

main();