/**
 * 14530. The Lost Cow
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,320 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 12월 1일
 */

const fs = require('fs');

function main() {
    let [x, y] = fs.readFileSync('/dev/stdin').toString().split(' ').map(x => +x);
    let res = 0,
        c = 1;


    while (true) {
        if (c < 0 && y <= x && y >= x - Math.abs(c) || c > 0 && y >= x && y <= x + Math.abs(c)) {
            res += Math.abs(x - y);

            console.log(res);

            break;
        }

        c *= -2;
        res += Math.abs(c);
    }
}

main();