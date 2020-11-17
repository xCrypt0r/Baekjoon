/**
 * 1598. 꼬리를 무는 숫자 나열
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,320 KB
 * 소요 시간: 144 ms
 * 해결 날짜: 2020년 11월 15일
 */

const fs = require('fs');

function main() {
    let [a, b] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => getCoord(+x));

    console.log(Math.abs(b[0] - a[0]) + Math.abs(b[1] - a[1]));
}

function getCoord(n) {
    return [Math.ceil(n / 4), n % 4 ? n % 4 : 4];
}

main();