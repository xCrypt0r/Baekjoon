/**
 * 1543. 문서 검색
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,328 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 12월 8일
 */

const fs = require('fs');

function main() {
    let [haystack, needle] = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let rgx = new RegExp(needle, 'g');

    console.log((haystack.match(rgx) || []).length);
}

main();
