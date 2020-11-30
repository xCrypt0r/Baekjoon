/**
 * 20299. 3대 측정
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 175,720 KB
 * 소요 시간: 984 ms
 * 해결 날짜: 2020년 11월 30일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));
    let [N, K, L] = input.shift();
    let vip = [],
        count = 0;

    for (let i = 0; i < N; i++) {
        let flag = true,
            sum = 0;

        for (let j = 0; j < 3; j++) {
            if (input[i][j] < L) {
                flag = false;

                break;
            }

            sum += input[i][j];
        }

        if (flag && sum >= K) {
            vip.push(...input[i]);
            count++;
        }
    }

    console.log(count);
    console.log(vip.join(' '));
}

main();