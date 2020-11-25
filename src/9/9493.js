/**
 * 9493. 길면 기차, 기차는 빨라, 빠른 것은 비행기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,636 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';

    for (let i = 0, len = input.length - 1; i < len; i++) {
        let [M, A, B] = input[i].split(' ').map(x => +x);
        let t = Math.round(Math.abs(M / (A / 3600) - M / (B / 3600))),
            h = Math.floor(t / 3600),
            m = Math.floor(t / 60) % 60,
            s = t % 60;

        output += `${h}:${pad(m)}:${pad(s)}\n`;
    }

    process.stdout.write(output);
}

function pad(n, width = 2, z = '0') {
    n = n + '';

    return n.length >= width ? n : new Array(width - n.length + 1).join(z) + n;
}

main();