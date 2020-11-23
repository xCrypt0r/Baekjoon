/**
 * 9226. 도깨비말
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let vowels = ['a', 'e', 'i', 'o', 'u'];

    for (let i = 0, len = input.length - 1; i < len; i++) {
        let word = input[i].split(''),
            pos = word.findIndex(x => vowels.indexOf(x) !== -1);

        for (let j = 0; j < pos; j++) {
            word.push(word.shift());
        }

        console.log(word.join('') + 'ay');
    }
}

main();