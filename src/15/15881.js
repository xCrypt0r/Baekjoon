/**
 * 15881. Pen Pineapple Apple Pen
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 10,632 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 12월 17일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim().split('\n')[1];

    console.log((s.match(/pPAp/g) ?? []).length);
}

main();
