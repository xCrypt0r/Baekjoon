/**
 * 9517. 아이 러브 크로아티아
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,316 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 22일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let K = +input.shift(),
        N = +input.shift();
    let time = 0;

    for (let i = 0; i < N; i++) {
        let [T, Z] = input[i].split(' ');

        time += +T;

        if (time >= 210) {
            console.log(K);

            break;
        }

        if (Z === 'T') {
            K++;

            if (K > 8) {
                K = 1;
            }
        }
    }
}

main();