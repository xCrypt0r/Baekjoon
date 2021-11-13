/**
 * 4821. 페이지 세기
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 14,372 KB
 * 소요 시간: 372 ms
 * 해결 날짜: 2021년 11월 13일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

    while (true) {
        let last = +input.shift();

        if (last === 0) {
            break;
        }

        let print = new Array(last + 1).fill(false),
            ranges = input.shift().split(',');

        for (let range of ranges) {
            if (range.includes('-')) {
                let [low, high] = range.split('-');

                for (let i = +low; i <= +high; i++) {
                    if (i <= last) {
                        print[i] = true;
                    }
                }
            } else {
                if (+range <= last) {
                    print[+range] = true;
                }
            }
        }

        console.log(print.filter(Boolean).length);
    }
}

main();