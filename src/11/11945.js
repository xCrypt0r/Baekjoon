/**
 * 11945. 뜨거운 붕어빵
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,268 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let [N, M] = input.shift().split(' ').map(x => +x);

    for (let i = 0; i < N; i++) {
        for (let j = M - 1; j > -1; j--) {
            output += input[i][j];
        }

        output += '\n';
    }

    process.stdout.write(output);
}

main();