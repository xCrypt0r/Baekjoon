/**
 * 3518. 공백왕 빈-칸
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 51,492 KB
 * 소요 시간: 336 ms
 * 해결 날짜: 2021년 10월 31일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n').map(line => line.trim().split(/\s+/)),
        maxIndex = Math.max(...input.map(line => line.length)),
        res = Array.from(Array(input.length), () => Array(maxIndex)),
        temp;

    for (let i = 0; i < maxIndex; i++) {
        let maxLength = 0;

        for (let j = 0; j < input.length; j++) {
            maxLength = Math.max(maxLength, (input[j][i] || '').length);
        }

        for (let j = 0; j < input.length; j++) {
            temp = input[j][i];

            if (temp) {
                res[j][i] = temp + ' '.repeat(maxLength - temp.length);
            }
        }
    }

    console.log(res.map(line => line.join(' ').trim()).join('\n'));
}

main();