/**
 * 15036. Just A Minim
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,140 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 10월 15일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n');
    let [N, codes] = [+input[0], input[1].split(' ').map(x => +x)];
    let notes = [2.0, 1.0, 0.5, 0.25, 0.125, 0.0625];
    let length = 0;

    for (let i = 0; i < N; i++) {
        let index = 0;

        if (codes[i] > 0) {
            while (true) {
                index++;

                if (codes[i] == 1) {
                    break;
                }

                codes[i] >>= 1;
            }
        }

        length += notes[index];
    }

    console.log(length.toFixed(6));
}

main();