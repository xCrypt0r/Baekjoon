/**
 * 16462. '나교수' 교수님의 악필
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,416 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let Q = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +Q.shift();
    let sum = Q.map(x => {
        let score = +x.replace(/[06]/g, '9');

        return score > 100 ? 100 : score;
    }).reduce((sum, v) => sum + v, 0);

    console.log(Math.round(sum / N));
}

main();