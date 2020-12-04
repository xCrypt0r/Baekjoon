/**
 * 10933. RIPEMD-160
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,784 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2020년 12월 2일
 */

const fs = require('fs');
const crypto = require('crypto');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim();
    let hash = crypto.createHash('ripemd160'),
        data = hash.update(s, 'utf-8');

    console.log(data.digest('hex'));
}

main();
