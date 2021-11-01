/**
 * 23334. Olympic Ranking
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 19,616 KB
 * 소요 시간: 256 ms
 * 해결 날짜: 2021년 11월 1일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        n = +input.shift(),
        scores = [];

    for (let i = 0; i < n; i++) {
        let [g, s, b, ...country] = input[i].split(' ');

        scores.push({
            gold: +g,
            silver: +s,
            bronze: +b,
            country: country.join(' ')
        });
    }

    scores.sort((a, b) => {
        if (a.gold === b.gold) {
            if (a.silver === b.silver) {
                return b.bronze - a.bronze;
            } else {
                return b.silver - a.silver;
            }
        } else {
            return b.gold - a.gold;
        }
    });

    console.log(scores[0].country);
}

main();