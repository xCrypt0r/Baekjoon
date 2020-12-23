/**
 * 20232. Archivist
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,708 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 24일
 */

const fs = require('fs');

function main() {
    let year = +fs.readFileSync('/dev/stdin').toString();
    let winner = ['ITMO', 'SPbSU', 'SPbSU', 'ITMO', 'ITMO', 'SPbSU', 'ITMO', 'ITMO', 'ITMO', 'ITMO', 'ITMO', 'PetrSU, ITMO', 'SPbSU', 'SPbSU', 'ITMO', 'ITMO', 'ITMO', 'ITMO', 'SPbSU', 'ITMO', 'ITMO', 'ITMO', 'ITMO', 'SPbSU', 'ITMO'];

    console.log(winner[year - 1995]);
}

main();
