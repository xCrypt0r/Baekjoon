/**
 * 15639. Rick
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,072 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 10월 15일
 */

const fs = require('fs');

function main() {
    let action = fs.readFileSync('/dev/stdin').toString().trim();
    let actions = ['Give you up', 'Let you down', 'Run around and desert you', 'Make you cry', 'Say goodbye', 'Tell a lie and hurt you'];

    console.log(actions.indexOf(action) != -1 ? 'NO' : 'YES');
}

main();
