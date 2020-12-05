/**
 * 13877. 이건 무슨 진법이지?
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,608 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 5일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let N = +input.shift();

    input = input.map(x => x.split(' ').map(y => +y));

    for (let i = 0; i < N; i++) {
        let [idx, dec] = input[i],
            oct = (dec + '').split('').map(x => +x).every(x => x < 8) ? parseInt(dec, 8) : 0,
            hex = parseInt(dec, 16);

        output += `${idx} ${oct} ${dec} ${hex}\n`;
    }

    process.stdout.write(output);
}

main();
