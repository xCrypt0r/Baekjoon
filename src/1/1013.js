/**
 * 1013. Contact
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,572 KB
 * 소요 시간: 144 ms
 * 해결 날짜: 2020년 12월 15일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let T = +input.shift();
    let rgx = /^(100+1+|01)+$/;

    for (let i = 0; i < T; i++) {
        output += (rgx.test(input[i]) ? 'YES' : 'NO') + '\n';
    }

    process.stdout.write(output);
}

main();
