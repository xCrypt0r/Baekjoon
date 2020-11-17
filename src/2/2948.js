/**
 * 2948. 2009년
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 14일
 */

const fs = require('fs');

function main() {
    let [d, m] = fs.readFileSync('/dev/stdin').toString().trim().split(' ');
    let day = new Date(`2009-${m}-${d}`).getDay();

    console.log(['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'][day]);
}

main();
