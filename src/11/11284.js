/**
 * 11284. 초성 중성 종성
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,328 KB
 * 소요 시간: 156 ms
 * 해결 날짜: 2021년 11월 14일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim();
    let choseong = 'ㄱㄲㄴㄷㄸㄹㅁㅂㅃㅅㅆㅇㅈㅉㅊㅋㅌㅍㅎ',
        jungseong = 'ㅏㅐㅑㅒㅓㅔㅕㅖㅗㅘㅙㅚㅛㅜㅝㅞㅟㅠㅡㅢㅣ',
        jongseong = ' ㄱㄲㄳㄴㄵㄶㄷㄹㄺㄻㄼㄽㄾㄿㅀㅁㅂㅄㅅㅆㅇㅈㅊㅋㅌㅍㅎ',
        c = input.charCodeAt(0) - 44032;

    console.log(choseong[~~(c / 588)]);
    console.log(jungseong[~~(c / 28 % 21)]);
    console.log(jongseong[c % 28]);
}

main();