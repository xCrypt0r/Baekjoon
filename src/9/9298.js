/**
 * 9298. Ant Entrapment
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 66,596 KB
 * 소요 시간: 2,488 ms
 * 해결 날짜: 2020년 12월 1일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let N = +input.shift(),
            ants = input.splice(0, N).map(x => x.split(' ').map(y => +y));

        ants.sort((a, b) => b[0] - a[0]);

        let x = ants[0][0] - ants[N - 1][0];

        ants.sort((a, b) => b[1] - a[1]);

        let y = ants[0][1] - ants[N - 1][1];

        output += `Case ${i + 1}: Area ${x * y}, Perimeter ${x * 2 + y * 2}\n`;
    }

    process.stdout.write(output);
}

main();