/**
 * 2456. 나는 학급회장이다
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,560 KB
 * 소요 시간: 140 ms
 * 해결 날짜: 2020년 11월 14일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input.shift();
    let votes = [[0, 0, 0], [0, 0, 0], [0, 0, 0]];

    input = input.map(line => line.split(' ').map(x => +x));

    for (let i = 0; i < 3; i++) {
        for (let j = 0; j < N; j++) {
            votes[i][input[j][i] - 1]++;
        }
    }

    votes.forEach((vote, i) => {
        let [a, b, c] = vote;

        vote.unshift(a + b * 2 + c * 3);
        vote.push(i + 1);
    });

    votes.sort((x, y) => {
        if (x[0] != y[0]) {
            return x[0] > y[0] ? -1 : 1;
        } else {
            if (x[3] != y[3]) {
                return x[3] > y[3] ? -1 : 1;
            } else {
                if (x[2] != y[2]) {
                    return x[2] > y[2] ? -1 : 1;
                } else {
                    return 0;
                }
            }
        }
    });

    if (votes[0][0] === votes[1][0] && votes[0][3] === votes[1][3] && votes[0][2] === votes[1][2]) {
        console.log(0, votes[0][0]);
    } else {
        console.log(votes[0][4], votes[0][0]);
    }
}

main();