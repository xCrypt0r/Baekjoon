/**
 * 2526. 싸이클
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,320 KB
 * 소요 시간: 152 ms
 * 해결 날짜: 2020년 11월 16일
 */

const fs = require('fs');

function main() {
    let [N, P] = fs.readFileSync('/dev/stdin').toString().split(' ').map(x => +x);
    let target = N,
        res = [N];

    while (true) {
        let idx;
        
        target = target * N % P;

        if ((idx = res.indexOf(target)) !== -1) {
            console.log(res.length - idx);

            break;
        }
        
        res.push(target);
    }
}

main();
