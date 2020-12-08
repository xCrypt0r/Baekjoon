/**
 * 1213. 팰린드롬 만들기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,316 KB
 * 소요 시간: 160 ms
 * 해결 날짜: 2020년 12월 8일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim().split('').sort();
    let count = {},
        half = '',
        odd = '';

    for (let i = 0, len = s.length; i < len; i++) {
        count[s[i]] ? count[s[i]]++ : count[s[i]] = 1;
    }

    for (let chr in count) {
        if (count[chr] & 1) {
            if (odd) {
                console.log('I\'m Sorry Hansoo');

                return;
            }

            odd = chr;
        }
    }

    for (let chr in count) {
        half += chr.repeat(count[chr] >> 1);
    }

    process.stdout.write(half + odd + half.split('').reverse().join(''));
}

main();
