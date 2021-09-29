/**
 * 3107. IPv6
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,276 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2021년 9월 30일
 */

const fs = require('fs');

function main() {
    var ip = fs.readFileSync('/dev/stdin').toString().trim().split(':').map(zeroPad);
    var zeros = '0000';

    for (let i = 0, lim = ip.length - 1; i < lim; i++) {
        if (ip[i] === zeros) {
            if (ip[i + 1] === zeros) {
                ip.splice(i, 1);
            }

            ip[i] = new Array(8 - ip.length + 1).fill(zeros).join(':');

            break;
        }
    }

    console.log(ip.join(':'));
}

function zeroPad(str) {
    return String(str).padStart(4, '0');
}

main();