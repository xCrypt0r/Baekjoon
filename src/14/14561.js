/**
 * 14561. 회문
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,916 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 12월 17일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let T = +input.shift();

    input = input.map(x => x.split(' ').map(y => +y));

    for (let i = 0; i < T; i++) {
        let [A, n] = input[i],
            s = A.toString(n);

        output += (s === strRev(s) ? '1' : '0') + '\n';
    }

    process.stdout.write(output);
}

function strRev(s) {
    return s.split('').reverse().join('');
}

main();
