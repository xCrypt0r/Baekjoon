/**
 * 8804. Palindromy
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 29,888 KB
 * 소요 시간: 204 ms
 * 해결 날짜: 2020년 12월 10일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let Z = +input.shift();

    for (let i = 0; i < Z; i++) {
        output += (input[i] === strrev(input[i]) ? '1' : '2') + '\n';
    }

    process.stdout.write(output);
}

function strrev(s) {
    return s.split('').reverse().join('');
}

main();
