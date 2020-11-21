/**
 * 5176. 대회 자리
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,440 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let K = +input.shift();

    for (let i = 0; i < K; i++) {
        let [P, M] = input.shift().split(' ').map(x => +x),
            seats = new Array(M + 1),
            count = 0;

        for (let j = 0; j < P; j++) {
            let n = +input.shift();
            
            !seats[n] ? seats[n] = true : count++;
        }

        console.log(count);
    }
}

main();
