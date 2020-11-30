/**
 * 13773. Olympic Games
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,320 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 30일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => +x),
        output = '';

    for (let i = 0, len = input.length - 1; i < len; i++) {
        let year = input[i],
            msg = '';

        if (year < 1896) {
            msg = 'No summer games';
        } else if ([1916, 1940, 1944].indexOf(year) !== -1) {
            msg = 'Games cancelled';
        } else if (year > 2020 && year % 4 === 0) {
            msg = 'No city yet chosen';
        } else if (year % 4 === 0) {
            msg = 'Summer Olympics';
        } else {
            msg = 'No summer games';
        }

        output += year + ' ' + msg + '\n';
    }

    process.stdout.write(output);
}

main();