/**
 * 4435. 중간계 전쟁
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,544 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let [hobbit, human, elf, dwarf, eagle, magician] = input.shift().split(' ').map(x => +x),
            [oak, human2, warg, goblin, urukhai, troll, magician2] = input.shift().split(' ').map(x => +x);
        let a = hobbit + human * 2 + elf * 3 + dwarf * 3 + eagle * 4 + magician * 10,
            b = oak + human2 * 2 + warg * 2 + goblin * 2 + urukhai * 3 + troll * 5 + magician2 * 10;

        console.log(`Battle ${i + 1}: ${a > b ? 'Good triumphs over Evil' : a < b ? 'Evil eradicates all trace of Good' : 'No victor on this battle field'}`);
    }
}

main();