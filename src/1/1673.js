/**
 * 1673. 치킨 쿠폰
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,792 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 21일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.split(' ').map(y => +y));

    for (let i = 0, len = input.length; i < len; i++) {
        let [n, k] = input[i],
            count = 0;

        while (n > 0) {
            if (n >= k) {
                let x = Math.floor(n / k);

                count += x * k;
                n -= x * k;
                n += x;
            } else {
                count += n;
                n = 0;
            }
        }

        console.log(count);
    }
}

main();