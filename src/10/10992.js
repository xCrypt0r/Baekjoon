/**
 * 10992. 별 찍기 - 17
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,520 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 22일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString(),
        output = '';

    for (let i = 0; i < n - 1; i++) {
        output += new Array(n - i).join(' ') + '*';

        if (i > 0) {
            output += new Array(i * 2).join(' ') + '*';
        }

        output += '\n';
    }

    output += new Array(n * 2).join('*') + '\n';

    process.stdout.write(output);
}

main();