/**
 * 5363. 요다
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,316 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let sentences = fs.readFileSync('/dev/stdin').toString().trim().split('\n').slice(1);

    for (let sentence of sentences) {
        let temp = sentence.split(' ');

        temp.push(temp.shift());
        temp.push(temp.shift());
        console.log(temp.join(' '));
    }
}

main();