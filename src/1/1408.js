/**
 * 1408. 24
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,296 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 2일
 */

const fs = require('fs');

function main() {
    let [now, start] = fs.readFileSync('/dev/stdin').toString().split('\n');
    let [h1, m1, s1] = now.split(':').map(x => +x),
        [h2, m2, s2] = start.split(':').map(x => +x);
    let left = (h2 - h1) * 3600 + (m2 - m1) * 60 + (s2 - s1);

    if (left < 0) {
        left += 24 * 60 * 60;
    }

    let h, m, s;

    h = Math.floor(left / 3600);
    left %= 3600;
    m = Math.floor(left / 60);
    left %= 60;
    s = left;

    process.stdout.write(`${zeroPadding(h, 2)}:${zeroPadding(m, 2)}:${zeroPadding(s, 2)}`);
}

function zeroPadding(n, len) {
    n = n + '';

    return n.length >= len ? n : new Array(len - n.length + 1).join('0') + n;
}

main();