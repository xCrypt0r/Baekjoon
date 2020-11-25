/**
 * 9449. Garage
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,680 KB
 * 소요 시간: 148 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let [W, H, w, h] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let [a, b] = [0, 0];

    while (W > 0) {
        W -= w;

        if (W >= 0) {
            a++;
        }

        W -= w - 0.000001;
    }

    while (H > 0) {
        H -= h;

        if (H >= 0) {
            b++;
        }

        H -= h - 0.000001;
    }

    console.log(a * b);
}

main();