/**
 * 2960. 에라토스테네스의 체
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,396 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 13일
 */

const fs = require('fs');

function main() {
    let [N, K] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let numbers = new Array(N - 1).fill(0).map((v, i) => i + 2);
    let last;

    outer:
        while (numbers && K) {
            let indexes = [];

            for (let i = 0, len = numbers.length, P = numbers[0]; i < len; i++) {
                if (numbers[i] % P === 0) {
                    indexes.push(i);

                    if (--K === 0) {
                        last = numbers[i];

                        break outer;
                    }
                }
            }

            for (let i = indexes.length - 1; i >= 0; i--) {
                numbers.splice(indexes[i], 1);
            }
        }

    console.log(last);
}

main();
