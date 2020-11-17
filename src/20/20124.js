/**
 * 20124. 모르고리즘 회장님 추천 받습니다
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 45,108 KB
 * 소요 시간: 440 ms
 * 해결 날짜: 2020년 11월 12일
 */

const fs = require('fs');

function main() {
    let [N, ...lines] = fs.readFileSync('/dev/stdin').toString().split('\n');
    let list = [];

    N = +N;

    for (let i = 0; i < N; i++) {
        let [name, score] = lines[i].split(' ');

        list.push({ name: name, score: +score });
    }

    list.sort((x, y) => {
        if (x.score !== y.score) {
            return x.score > y.score ? -1 : 1;
        } else {
            return x.name < y.name ? -1 : 1;
        }
    });

    console.log(list[0].name);
}

main();
