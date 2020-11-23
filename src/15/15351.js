/**
 * 15351. 인생 점수
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,332 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n');
    let N = +input.shift();

    input = input.map(x => x.replace(/[^A-Z]/g, ''));

    for (let i = 0; i < N; i++) {
        let life = input[i],
            score = 0;

        for (let i = 0, len = life.length; i < len; i++) {
            score += life.charCodeAt(i) - 64;
        }

        console.log(score === 100 ? 'PERFECT LIFE' : score);
    }
}

main();