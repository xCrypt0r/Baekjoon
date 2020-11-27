/**
 * 17450. 과자 사기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,296 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let [[sp, sw], [np, nw], [up, uw]] = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));

    if (sp >= 500) {
        sp -= 50;
    }

    if (np >= 500) {
        np -= 50;
    }

    if (up >= 500) {
        up -= 50;
    }

    let s = sw / sp,
        n = nw / np,
        u = uw / up;

    console.log(s < n ? n < u ? 'U' : 'N' : s < u ? 'U' : 'S');
}

main();