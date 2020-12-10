/**
 * 9229. 단어 사다리
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,268 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 12월 10일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('#').map(x => x.trim().split('\n')),
        output = '';

    for (let i = 0, len = input.length - 2; i < len; i++) {
        let words = input[i],
            chainable = true;

        for (let j = 0, len2 = words.length - 1; j < len2; j++) {
            if (!isChainable(words[j], words[j + 1])) {
                chainable = false;

                break;
            }
        }

        output += (chainable ? 'Correct' : 'Incorrect') + '\n';
    }

    process.stdout.write(output);
}

function isChainable(a, b) {
    let count = 0;

    if (a.length !== b.length) {
        return false;
    }

    for (let i = 0, len = a.length; i < len; i++) {
        if (a[i] !== b[i]) {
            count++;
        }
    }

    return count === 1;
}

main();