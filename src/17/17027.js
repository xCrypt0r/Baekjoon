/**
 * 17027. Shell Game
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,440 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input.shift();
    let shells = [0, 1, 2, 3],
        score = [0, 0, 0];

    for (let i = 0; i < N; i++) {
        let [a, b, g] = input[i].split(' ').map(x => +x);

        [shells[a], shells[b]] = [shells[b], [shells[a]]];
        score[shells[g] - 1]++;
    }

    console.log(Math.max(...score));
}

main();