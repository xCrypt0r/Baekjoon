/**
 * 2204. 도비의 난독증 테스트
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,608 KB
 * 소요 시간: 196 ms
 * 해결 날짜: 2020년 12월 19일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';

    while (true) {
        let n = +input.shift(),
            words = input.splice(0, n);

        if (n === 0) {
            break;
        }

        words.sort(sortIgnoreCase);

        output += words[0] + '\n';
    }

    process.stdout.write(output);
}

function sortIgnoreCase(a, b) {
    return a.toLowerCase().localeCompare(b.toLowerCase());
}

main();
