/**
 * 13655. Guarda Costeira
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,480 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));

    for (let i = 0, len = input.length; i < len; i++) {
        let [D, VF, VG] = input[i];

        console.log((D * D + 144) ** 0.5 / VG > 12 / VF ? 'N' : 'S');
    }
}

main();