/**
 * 17116. 목격자
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,272 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 12일
 */

const fs = require('fs');

function main() {
    let c = fs.readFileSync('/dev/stdin').toString().trim().charCodeAt(0);

    if (c === 75 || c === 76) {
        console.log('BABA IS WIN');
    } else if (c === 66 || c === 84) {
        console.log('BABA IS NOT WIN');
    }
}

main();