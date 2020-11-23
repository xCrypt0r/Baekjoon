/**
 * 14724. 관리자는 누구?
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,356 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n').slice(1).map(x => x.split(' ').map(y => +y));
    let guilds = ['PROBRAIN', 'GROW', 'ARGOS', 'ADMIN', 'ANT', 'MOTION', 'SPG', 'COMON', 'ALMIGHTY'];
    let max = 0,
        number = -1;

    for (let i = 0; i < 9; i++) {
        for (let j = 0, len = input[i].length; j < len; j++) {
            if (input[i][j] > max) {
                max = input[i][j];
                number = i;
            }
        }
    }

    console.log(guilds[number]);
}

main();