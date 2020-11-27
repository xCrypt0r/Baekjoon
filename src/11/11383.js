/**
 * 11383. 뚊
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,304 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, M] = input.shift().split(' ').map(x => +x);
    let flag = true;

    outer:
        for (let i = 0; i < N; i++) {
            let image = input[i],
                longImage = input[i + N];

            for (let j = 0, len = image.length; j < len; j++) {
                if (image[j] !== longImage[j * 2] || image[j] !== longImage[j * 2 + 1]) {
                    flag = false;

                    break outer;
                }
            }
        }

    console.log(flag ? 'Eyfa' : 'Not Eyfa');
}

main();