/**
 * 6581. HTML
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,324 KB
 * 소요 시간: 152 ms
 * 해결 날짜: 2021년 10월 23일
 */

const fs = require('fs');

function main() {
    let words = fs.readFileSync('/dev/stdin').toString().trim().split(/\s+/);
    let count = 0;
    let res = '';

    for (let i = 0; i < words.length; i++) {
        let word = words[i],
            delta = word.length;

        if (word === '<br>') {
            res += '\n';
            count = 0;
        } else if (word === '<hr>') {
            res += (count !== 0 ? '\n' : '') + '-'.repeat(80) + '\n';
            count = 0;
        } else {
            if (count === 0) {
                res += word;
                count = delta;
            } else {
                if (count + delta + 1 <= 80) {
                    res += ' ' + word;
                    count += delta + 1;

                    if (count === 80) {
                        res += '\n';
                        count = 0;
                    }
                } else {
                    res += '\n' + word;
                    count = delta;
                }
            }
        }
    }

    process.stdout.write(res);
}

main();