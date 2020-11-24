/**
 * 17502. 클레어와 팰린드롬
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,328 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 24일
 */

const fs = require('fs');

function main() {
    let [N, s] = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

    s = s.split('');

    for (let i = 0, len = N >> 1; i <= len; i++) {
        if (s[i] === '?') {
            if (s[s.length - i - 1] !== '?') {
                s[i] = s[s.length - i - 1];
            } else {
                s[i] = s[s.length - i - 1] = 'x';
            }
        } else if (s[s.length - i - 1] === '?') {
            if (s[i] !== '?') {
                s[s.length - i - 1] = s[i];
            } else {
                s[s.length - i - 1] = s[i] = 'x';
            }
        }
    }

    console.log(s.join(''));
}

main();