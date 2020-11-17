/**
 * 8806. Papier kamień nożyczki
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 7,056 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 10월 15일
 */

const fs = require('fs');

function main() {
    let [N, ...lines] = fs.readFileSync('/dev/stdin').toString().split('\n');

    for (let i = 0; i < +N; i++) {
        let adam = lines[i * 2].split(' ').map(x => +x),
            gosia = lines[i * 2 + 1].split(' ').map(x => +x),
            probability = 0;

        for (let j = 0; j < 3; j++) {
            probability += adam[j] *  gosia[(j + 1) % 3] - adam[j] * gosia[(j + 2) % 3];
        }

        process.stdout.write((probability > 0 ? 'ADAM' : probability < 0 ? 'GOSIA' : '=') + '\n');
    }
}

main();