/**
 * 3568. iSharp
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,300 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 12월 17일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().replace(/;$/, '');
    let [iType, ...vars] = input.split(' ').map(x => x.replace(/,$/, ''));
    let output = vars.map(x => {
        let [, variable, iType2] = x.match(/([a-zA-Z]+)([^a-zA-Z]*)/);

        iType2 = iType2.split('').reverse().join('').replace(/\]\[/g, '[]');

        return `${iType}${iType2} ${variable};`;
    }).join('\n');

    process.stdout.write(output);
}

main();
