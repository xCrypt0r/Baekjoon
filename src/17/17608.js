/**
 * 17608. 막대기
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 20,996 KB
 * 소요 시간: 216 ms
 * 해결 날짜: 2020년 11월 24일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, h] = [+input.shift(), input.map(x => +x)];
    let stack = [],
        visible = 0;

    for (let i = 0; i < N; i++) {
        while (visible !== 0 && stack[visible - 1] <= h[i]) {
            visible--;
        }

        stack[visible++] = h[i];
    }

    console.log(visible);
}

main();