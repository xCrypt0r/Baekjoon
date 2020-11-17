/**
 * 5598. 카이사르 암호
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,344 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 11월 13일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim(),
        len = s.length,
        output = '';

    for (let i = 0; i < len; i++) {
        let code = s.charCodeAt(i);

        output += String.fromCharCode(code > 67 ? code - 3 : code + 23);
    }

    console.log(output);
}

main();
