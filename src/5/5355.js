/**
 * 5355. 화성 수학
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,700 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let [n, ...operators] = input[i].split(' ');

        n = +n;

        operators.forEach(o => {
            if (o === '@') {
                n *= 3;
            } else if (o === '%') {
                n += 5;
            } else if (o === '#') {
                n -= 7;
            }
        });

        console.log(n.toFixed(2));
    }
}

main();
