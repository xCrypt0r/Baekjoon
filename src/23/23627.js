/**
 * 23627. driip
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,724 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2021년 11월 23일
 */

const fs = require('fs');

function main() {
    let S = fs.readFileSync('/dev/stdin').toString().trim();

    console.log(/driip$/.test(S) ? 'cute' : 'not cute');
}

main();