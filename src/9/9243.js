/**
 * 9243. 파일 완전 삭제
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,348 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, a, b] = [+input[0], input[1], input[2]];

    if (N % 2) {
        let temp = '';

        for (let i = 0, len = a.length; i < len; i++) {
            temp += (a[i] ^ 1) + '';
        }

        a = temp;
    }

    console.log(a === b ? 'Deletion succeeded' : 'Deletion failed');
}

main();
