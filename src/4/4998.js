/**
 * 4998. 저금
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 11,820 KB
 * 소요 시간: 236 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));

    for (let i = 0, len = input.length; i < len; i++) {
        let [N, B, M] = input[i],
            count = 0;

        while (N <= M) {
            N *= (1 + B / 100);
            count++;

            if (N > M) {
                console.log(count);
            }
        }
    }
}

main();