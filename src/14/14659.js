/**
 * 14659. 한조서열정리하고옴ㅋㅋ
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 10,884 KB
 * 소요 시간: 608 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let heights = fs.readFileSync('/dev/stdin').toString().trim().split('\n')[1].split(' ').map(x => +x);
    let max = 0;

    for (let i = 0, len = heights.length; i < len; i++) {
        let h = heights[i],
            count = 0;

        for (let j = i + 1; j < len; j++) {
            if (h > heights[j]) {
                count++;
            } else {
                break;
            }
        }

        if (count > max) {
            max = count;
        }
    }

    console.log(max);
}

main();