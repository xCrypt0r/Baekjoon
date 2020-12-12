/**
 * 1747. 소수&팰린드롬
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,520 KB
 * 소요 시간: 356 ms
 * 해결 날짜: 2020년 12월 13일
 */

const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString();

    for (let i = n; i <= 1004000; i++) {
        if (isPrime(i) && isPalindrome(i)) {
            console.log(i);

            break;
        }
    }
}
    
function isPrime(n) {
    if (n === 1) {
        return false;
    }

    if (n === 2 || n === 3) {
        return true;
    }

    if (n % 2 === 0) {
        return false;
    }

    let divisor = 3;
    let limit = Math.sqrt(n);

    while (limit >= divisor) {
        if (n % divisor === 0) {
            return false;
        }

        divisor += 2;
    }

    return true;
}

function isPalindrome(n) {
    let num = n,
        rev = 0;

    while (num !== 0) {
        rev *= 10;
        rev = rev + (num % 10);
        num = ~~(num / 10);
    }

    return n === rev;
}

main();
