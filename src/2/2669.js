/**
 * 2669. 직사각형 네개의 합집합의 면적 구하기
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,416 KB
 * 소요 시간: 124 ms
 * 해결 날짜: 2020년 11월 22일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let board = [...Array(101)].map(x => Array(101)),
        area = 0;

    for (let i = 0; i < 4; i++) {
        let [x1, y1, x2, y2] = input[i].split(' ').map(x => +x);

        for (let x = x1; x < x2; x++) {
            for (let y = y1; y < y2; y++) {
                if (!board[x][y]) {
                    board[x][y] = true;
                    area++;
                }
            }
        }
    }

    console.log(area);
}

main();