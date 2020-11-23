/**
 * 4592. 중복을 없애자
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,724 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');

    for (let i = 0, len = input.length - 1; i < len; i++) {
        let arr = input[i].split(' '),
            n = +arr.shift(),
            res = [];

        for (let j = 0; j < n; j++) {
            if (res[res.length - 1] !== arr[j]) {
                res.push(arr[j]);
            }
        }

        res.push('$');
        console.log(res.join(' '));
    }
}

main();