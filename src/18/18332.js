/**
 * 18332. Valid Emails
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,696 KB
 * 소요 시간: 156 ms
 * 해결 날짜: 2020년 12월 18일
 */

const fs = require('fs');

function main() {
    let [, ...input] = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let rgx1 = /^\w[a-zA-Z0-9_.]*\w$/,
        rgx2 = /\.{2,}/,
        rgx3 = /^([a-zA-Z0-9\-]+\.)*[a-zA-Z0-9\-]+$/;
    let valid = [];

    input = input
        .filter(x => x.includes('@') && x.match(/@/g)?.length === 1)
        .map(x => x.split('@'));

    for (let i = 0, len = input.length; i < len; i++) {
        let [username, domain] = input[i];

        if (rgx1.test(username) && !rgx2.test(username)) {
            username = username.replace(/\./g, '');

            if (
                username.length >= 6
                && username.length <= 30
                && rgx3.test(domain)
                && domain.length >= 3
                && domain.length <= 30
            ) {
                valid.push(`${username}@${domain}`.toLowerCase());
            }
        }
    }
    
    console.log([...new Set(valid)].length);
}

main();
