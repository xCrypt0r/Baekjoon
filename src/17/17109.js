/**
 * 17109. 연결그래프의 모든 간선의 저항이 1Ω일 경우 간선으로 직접 이어진 모든 쌍의 점 A, B 에 대해 A와 B 사이의 합성저항 값의 총합을 구한 뒤 소수점 넷째자리에서 반올림한 값을 출력하는 문제
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,356 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 27일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [m, n] = input[0].split(' ').map(x => +x);

    console.log((n === 0 ? 0 : m - 1).toFixed(3));
}

main();