/**
 * 13288. A New Alphabet
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,548 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().toLowerCase();
    let alphabet = {
        a: '@', b: '8', c: '(', d: '|)', e: '3', f: '#', g: '6', h: '[-]', i: '|', j: '_|', k: '|<', l: '1', m: '[]\\/[]',
        n: '[]\\[]', o: '0', p: '|D', q: '(,)', r: '|Z', s: '$', t: '\'][\'', u: '|_|', v: '\\/', w: '\\/\\/', x: '}{', y: '`/', z: '2'
    };
    let res = '';

    for (let i = 0, len = s.length; i < len; i++) {
        res += alphabet[s[i]] || s[i];
    }

    console.log(res);
}

main();