/**
 * 20254. Site Score
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,312 KB
 * 소요 시간: 144 ms
 * 해결 날짜: 2020년 11월 25일
 */

const fs = require('fs');

function main() {
    console.log(
        fs
            .readFileSync('/dev/stdin')
            .toString()
            .split(' ')
            .map(x => +x)
            .reduce((res, v, i) => res + [56, 24, 14, 6][i] * v, 0)
    );
}

main();