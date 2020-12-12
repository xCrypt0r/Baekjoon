/**
 * 1283. 단축키 지정
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,380 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 12월 12일
 */

const fs = require('fs');
let keys = [];

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let N = +input.shift();

    for (let i = 0; i < N; i++) {
        let index = findShortKey(input[i]);

        output += registerShortKey(input[i], index) + '\n';
    }

    process.stdout.write(output);
}

function findShortKey(option) {
    let first = [],
        second = [],
        rgx1 = /\b\w/g,
        rgx2 = /\B\w/g,
        match;

    option = option.toLowerCase();

    while (match = rgx1.exec(option)) {
        first.push(match.index);
    }

    while (match = rgx2.exec(option)) {
        second.push(match.index);
    }

    for (let i = 0, len = first.length; i < len; i++) {
        if (!keys.includes(option[first[i]])) {
            keys.push(option[first[i]]);

            return first[i];
        }
    }

    for (let i = 0, len = second.length; i < len; i++) {
        if (!keys.includes(option[second[i]])) {
            keys.push(option[second[i]]);

            return second[i];
        }
    }

    return -1;
}

function registerShortKey(option, i) {
    if (i === -1) {
        return option;
    }

    return option.substr(0, i) + '[' + option[i] + ']' + option.substr(i + 1);
}

main();
