/**
 * 17201. 자석 체인
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,328 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim().split('\n')[1];
    let flag = false;

    for (let i = 1, len = s.length - 1; i < len; i += 2) {
        if (s[i] === s[i + 1]) {
            flag = true;

            break;
        }
    }

    console.log(flag ? 'No' : 'Yes');
}

main();