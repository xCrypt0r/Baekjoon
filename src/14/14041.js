/**
 * 14041. Arrival Time
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,072 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 10월 14일
 */

const fs = require('fs');

function main() {
    let [H, M] = fs.readFileSync('/dev/stdin').toString().split(':').map(x => +x);
    let T = H * 60 + M;

    for (let i = 0; i < 120; i++) {
        if ((T >= 420 && T < 600) || (T >= 900 && T < 1140)) {
            T += 2;
        } else {
            T++;
        }

        T %= 1440;
    }

    let [h, m] = [0, T];

    h += Math.floor(m / 60);
    m %= 60;
    h %= 24;

    console.log(`${String(h).padStart(2, '0')}:${String(m).padStart(2, '0')}`);
}

main();