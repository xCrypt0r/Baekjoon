/**
 * 6139. Speed Reading
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 11,004 KB
 * 소요 시간: 196 ms
 * 해결 날짜: 2020년 11월 26일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n'),
        output = '';
    let [N, K] = input.shift().split(' ').map(x => +x);

    for (let i = 0; i < K; i++) {
        let [S, T, R] = input[i].split(' ').map(x => +x);
        let time = 0,
            count = 0;

        while (true) {
            if (N - count <= S * T) {
                time += Math.ceil((N - count) / S);

                break;
            } else {
                count += S * T;
                time += T + R;
            }
        }

        output += time + '\n';
    }

    process.stdout.write(output);
}

main();
