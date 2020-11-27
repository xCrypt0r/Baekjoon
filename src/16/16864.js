/**
 * 16864. So You Like Your Food Hot?
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,456 KB
 * 소요 시간: 188 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let [S, A, B] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x.split('.')[0] * 100 + +x.split('.')[1]);
    let count = 0;

    for (let i = 0, limit = ~~(S / A) + 1; i < limit; i++) {
        if ((S - A * i) % B === 0) {
            count++;

            console.log(i, ~~((S - A * i) / B));
        }
    }

    if (count === 0) {
        console.log('none');
    }
}

main();