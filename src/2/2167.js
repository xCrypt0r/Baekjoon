/**
 * 2167. 2차원 배열의 합
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 15,892 KB
 * 소요 시간: 1,168 ms
 * 해결 날짜: 2020년 12월 13일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let [N, M] = input.shift().split(' ').map(x => +x),
        arr = input.splice(0, N).map(x => x.split(' ').map(y => +y)),
        K = +input.shift();

    input = input.map(x => x.split(' ').map(y => y - 1));

    for (let a = 0; a < K; a++) {
        let sum = 0,
            [i, j, x, y] = input[a];

        for (let b = i; b <= x; b++) {
            for (let c = j; c <= y; c++) {
                sum += arr[b][c];
            }
        }

        output += sum + '\n';
    }

    process.stdout.write(output);
}

main();
