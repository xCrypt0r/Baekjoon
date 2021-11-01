/**
 * 23292. 코딩 바이오리듬
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,812 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2021년 11월 1일
 */

const fs = require('fs');

function main() {
    let [birth, ...dates] = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        N = +dates.shift(),
        biorythms = {};

    for (let i = 0; i < N; i++) {
        let temp1 = 0,
            temp2 = 0,
            temp3 = 0;

        for (let j = 0; j < 4; j++) {
            temp1 += (birth[j] - dates[i][j]) ** 2
        }

        for (let j = 4; j < 6; j++) {
            temp2 += (birth[j] - dates[i][j]) ** 2
        }

        for (let j = 6; j < 8; j++) {
            temp3 += (birth[j] - dates[i][j]) ** 2
        }

        biorythms[dates[i]] = temp1 * temp2 * temp3;
    }

    let sorted = Object.entries(biorythms)
        .sort((a, b) => a[0] - b[0])
        .sort((a, b) => b[1] - a[1]);

    console.log(sorted[0][0]);
}

main();