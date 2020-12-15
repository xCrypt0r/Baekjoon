/**
 * 17214. 다항 함수의 적분
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,292 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 12월 15일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().replace(/-/g, '+-');

    console.log(integrate(input));
}

function integrate(formula) {
    let a = 0,
        b = 0;
    let res = [];

    formula.split('+').forEach(term => {
        if (/x$/.test(term)) {
            a = +term.match(/(-?\d+)/)[1] / 2;
        } else {
            b = +term;
        }
    });

    if (a !== 0) {
        res.push((a === 1 ? '' : a === -1 ? '-' : a) + 'xx');
    }

    if (b !== 0) {
        res.push((b === 1 ? '' : b === -1 ? '-' : b) + 'x');
    }

    res.push('W');

    return res.join('+').replace(/\+-/g, '-');
}

main();