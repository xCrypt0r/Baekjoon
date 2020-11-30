/**
 * 15312. 이름 궁합
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 15,468 KB
 * 소요 시간: 400 ms
 * 해결 날짜: 2020년 11월 30일
 */

const fs = require('fs');

function main() {
    let [A, B] = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let strokes = [3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1];
    let chemi = [];

    for (let i = 0, len = A.length * 2; i < len; i++) {
        chemi.push(i & 1 ? strokes[B.charCodeAt(~~(i / 2)) - 65] : strokes[A.charCodeAt(i / 2) - 65]);
    }

    while (chemi.length > 2) {
        let temp = [];

        for (let i = 0, len = chemi.length - 1; i < len; i++) {
            temp.push((chemi[i] + chemi[i + 1]) % 10);
        }

        chemi = temp;
    }

    console.log(chemi.join(''));
}

main();