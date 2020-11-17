/**
 * 19843. 수면 패턴
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,352 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 10월 14일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n');
    let week = { 'Mon': 0, 'Tue': 1, 'Wed': 2, 'Thu': 3, 'Fri': 4 };
    let [T, N] = input.shift().split(' ').map(x => Number(x));
    let sleep = 0;

    for (let i = 0; i < N; i++) {
        let [D1, H1, D2, H2] = input[i].split(' ');

        sleep += Number(H2) - Number(H1) + (week[D2] - week[D1]) * 24;
    }

    console.log(T < sleep ? 0 : T - sleep > 48 ? -1 : T - sleep);
}

main();