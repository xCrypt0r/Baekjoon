/**
 * 11285. 초성 중성 종성 2
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,308 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2021년 11월 15일
 */

const fs = require('fs');

function main() {
    let [ca, cb, cc = ' '] = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let choseong = 'ㄱㄲㄴㄷㄸㄹㅁㅂㅃㅅㅆㅇㅈㅉㅊㅋㅌㅍㅎ',
        jungseong = 'ㅏㅐㅑㅒㅓㅔㅕㅖㅗㅘㅙㅚㅛㅜㅝㅞㅟㅠㅡㅢㅣ',
        jongseong = ' ㄱㄲㄳㄴㄵㄶㄷㄹㄺㄻㄼㄽㄾㄿㅀㅁㅂㅄㅅㅆㅇㅈㅊㅋㅌㅍㅎ';

    console.log(
        String.fromCharCode(
            choseong.indexOf(ca) * 588 + jungseong.indexOf(cb) * 28 + jongseong.indexOf(cc) + 44032
        )
    );
}

main();