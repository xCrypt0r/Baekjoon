/**
 * 1942. 디지털시계
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 11,848 KB
 * 소요 시간: 212 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => x.replace(' ', ':'));

    for (let i = 0; i < 3; i++) {
        let [h1, m1, s1, h2, m2, s2] = input[i].split(':').map(x => +x);
        let r1 = h1 * 3600 + m1 * 60 + s1,
            r2 = h2 * 3600 + m2 * 60 + s2,
            count = 0;

        if (r1 > r2) {
            r2 += 3600 * 24;
        }

        for (let j = 0, end = r2 - r1 + 1; j < end; j++) {
            if ((h1 * 10000 + m1 * 100 + s1) % 3 === 0) {
                count++;
            }

            if (++s1 === 60) {
                s1 = 0;
                m1++;
            }

            if (m1 === 60) {
                m1 = 0;
                h1++;
            }

            if (h1 === 24) {
                h1 = 0;
            }
        }

        console.log(count);
    }
}

main();