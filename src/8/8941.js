/**
 * 8941. Molar mass
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,588 KB
 * 소요 시간: 160 ms
 * 해결 날짜: 2021년 11월 13일
 */

const fs = require('fs');

function main() {
    let [N, ...formulas] = fs.readFileSync('/dev/stdin').toString().split('\n');
    let weights = {
        'C': 12.01,
        'H': 1.008,
        'O': 16.00,
        'N': 14.01
    };
    let rgx = /[A-Z]\d+/g;

    for (let i = 0; i < +N; i++) {
        let mass = 0;

        (formulas[i].match(rgx) || []).forEach(el => {
            mass += +el.slice(1) * weights[el[0]];
        });

        formulas[i].replace(rgx, '').split('').forEach(el => {
            mass += weights[el];
        });

        console.log(mass.toFixed(3));
    }
}

main();