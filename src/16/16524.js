/**
 * 16524. Database of Clients
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,820 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2021년 10월 22일
 */

const fs = require('fs');

function main() {
    let emails = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +emails.shift();
    let rgx = /(\.|\+.+)(?=.*@)/g;
    let uniq = new Set();

    for (let i = 0; i < N; i++) {
        uniq.add(emails[i].replace(rgx, ''));
    }

    console.log(uniq.size);
}

main();