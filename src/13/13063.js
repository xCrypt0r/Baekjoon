/**
 * 13063. Lobby
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,648 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 12월 5일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y)),
        output = '';

    for (let i = 0, len = input.length - 1; i < len; i++) {
        let [n, m, k] = input[i];

        output += (n - k > ~~(n / 2) ? Math.max(~~(n / 2) - m + 1, 0) : -1) + '\n';
    }

    process.stdout.write(output);
}

main();
