/**
 * 5177. 출력 형식이 잘못되었습니다
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,316 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 12월 17일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let K = +input.shift();

    for (let i = 0; i < K; i++) {
        let [s1, s2] = input.splice(0, 2).map(replace);

        output += `Data Set ${i + 1}: ${s1 === s2 ? 'equal' : 'not equal'}\n\n`;
    }

    process.stdout.write(output);
}

function replace(s) {
    return s
        .toLowerCase()
        .replace(/[\[\{]/g, '(')
        .replace(/[\]\}]/g, ')')
        .replace(/;/g, ',')
        .replace(/ +/g, ' ')
        .replace(/ ?([\(\)\[\]\{\}\.,;:]) ?/g, '$1');
}

main();
