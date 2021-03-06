/**
 * 1032. 명령 프롬프트
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,336 KB
 * 소요 시간: 144 ms
 * 해결 날짜: 2020년 11월 14일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let N = +input.shift(),
        len = input[0].length;

    for (let i = 0; i < len; i++) {
        let isSame = true,
            char = input[0][i];

        for (let j = 1; j < N; j++) {
            if (input[j][i] !== char) {
                isSame = false;

                break;
            }
        }

        output += isSame ? char : '?';
    }

    console.log(output);
}

main();