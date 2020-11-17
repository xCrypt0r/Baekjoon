/**
 * 2153. 소수 단어
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,292 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 11월 15일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim();
    let sum = 0;

    for (let i = 0, len = input.length; i < len; i++) {
        let code = input.charCodeAt(i);

        sum += code - (code >= 97 && code <= 122 ? 96 : 38);
    }

    console.log(isPrime(sum) ? 'It is a prime word.' : 'It is not a prime word.');
}

function isPrime(n) {
    if (n === 1) {
        return true;
    }

    if (n > 2 && n % 2 === 0) {
        return false;
    }

    for (let i = 3, limit = Math.sqrt(n); i < limit; i += 2) {
        if (n % i === 0) {
            return false;
        }
    }

    return n > 1;
}

main();