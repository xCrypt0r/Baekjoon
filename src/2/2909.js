/**
 * 2909. 캔디 구매
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,316 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let [C, K] = fs.readFileSync('/dev/stdin').toString().split(' ').map(x => +x);
    let money = Math.pow(10, K);

    console.log(Math.round(C / money) * money);
}

main();
