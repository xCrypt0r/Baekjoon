/**
 * 14489. 치킨 두 마리 (...)
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,588 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 11월 6일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n');
    let money = input[0].split(' ').map(x => +x).reduce((sum, val) => sum + val, 0),
        price = +input[1];
    
    console.log(money >= price * 2 ? money - price * 2 : money);
}

main();
