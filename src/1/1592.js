/**
 * 1592. 영식이와 친구들
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,340 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 24일
 */

const fs = require('fs');

function main() {
    let [N, M, L] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let receive = new Array(N + 1).fill(0),
        count = 0,
        i = 1;

    receive[1] = 1;

    while (receive[i] !== M) {
        if (receive[i] & 1) {
            i += L;

            if (i > N) {
                i -= N;
            }
        } else {
            i -= L;

            if (i <= 0) {
                i += N;
            }
        }

        receive[i]++;
        count++;
    }

    console.log(count);
}

main();