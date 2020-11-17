/**
 * 1773. 폭죽쇼
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 24,584 KB
 * 소요 시간: 608 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, C] = input.shift().split(' ').map(x => +x);
    let visible = new Array(C + 1).fill(false),
        count = 0;

    input = input.map(x => +x);

    for (let i = 0; i < N; i++) {
        let n = input[i];

        for (let j = n; j <= C; j += n) {
            if (!visible[j]) {
                visible[j] = true;
                count++;
            }
        }
    }

    console.log(count);
}

main();