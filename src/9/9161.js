/**
 * 9161. Sir Bedavere’s Bogus Division Solutions
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 9,432 KB
 * 소요 시간: 168 ms
 * 해결 날짜: 2020년 12월 15일
 */

function main() {
    let output = '';

    for (let i = 10; i < 100; i++) {
        for (let j = 1; j < 10; j++) {
            for (let k = 10; k < 100; k++) {
                let x = i * 10 + j,
                    y = j * 100 + k;

                if (x / y === i / k && (x !== y || i !== k)) {
                    output += `${x} / ${y} = ${i} / ${k}\n`;
                }
            }
        }
    }

    process.stdout.write(output);
}

main();