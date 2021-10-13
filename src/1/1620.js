/**
 * 1620. 나는야 포켓몬 마스터 이다솜
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 63,652 KB
 * 소요 시간: 396 ms
 * 해결 날짜: 2021년 10월 13일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, M] = input[0].split(' ').map(Number);
    let indexes = {},
        names = {},
        quiz,
        res = '';

    for (let i = 1; i <= N; i++) {
        indexes[input[i]] = i;
        names[i] = input[i];
    }

    for (let i = N + 1; i < input.length; i++) {
        quiz = input[i];
        res += (Number.isInteger(+quiz) ? names[+quiz] : indexes[quiz]) + '\n';
    }

    process.stdout.write(res);
}

main();