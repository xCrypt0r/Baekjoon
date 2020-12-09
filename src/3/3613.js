/**
 * 3613. Java vs C++
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 12월 9일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim();

    if (
        /[^a-zA-Z_]/.test(s) 
        || /^[^a-z]/.test(s) 
        || /_$/.test(s) 
        || /_[^a-z]/.test(s) 
        || (/[A-Z]/.test(s) && /_/.test(s))
    ) {
        console.log('Error!');
    } else if (/[A-Z]/.test(s)) {
        console.log(s.replace(/[A-Z]/g, x => '_' + x.toLowerCase()));
    } else {
        console.log(s.replace(/_[a-z]/g, x => x[1].toUpperCase()));
    }
}

main();
