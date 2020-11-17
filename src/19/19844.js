/**
 * 19844. 단어 개수 세기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,176 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 10월 13일
 */

const fs = require('fs');

function main() {
    let sentence = fs.readFileSync('/dev/stdin').toString();
    let words = sentence.split(/[ \-]/);
    let is_shorthand = /^(c|j|n|m|t|s|l|d|qu)'[aeiouh]/;
    let count = words.length;

    for (let word of words) {
        if (is_shorthand.test(word)) {
            count++;
        }
    }

    console.log(count);
}

main();