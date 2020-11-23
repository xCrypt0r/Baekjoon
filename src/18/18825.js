/**
 * 18825. 눈치게임 A+B! A-B! A+B! 터렛! A+B! 피보나치 함수! A+B! A-B! A+B! 어린 왕자! A+B! ACM Craft! A+B! A-B! A+B! 습격자 초라기! A+B! 벡터 매칭! A+B! A-B! A+B! A/B! A+B! 터렛! A+B! A-B! A+B! 분산처리! A+B! A+B! 마셔라! 마셔라 마셔라! 마셔라 틀이 들어간다!
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,348 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let [A, B] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);

    console.log(A + B);
}

main();