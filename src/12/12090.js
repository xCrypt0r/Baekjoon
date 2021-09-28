/**
 * 12090. 초성 변환
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,320 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2021년 9월 29일
 */

const fs = require('fs');

function main() {
    let S = fs.readFileSync('/dev/stdin').toString().trim();

    console.log(getChoseong(S));
}

function getChoseong(s) {
    let choseong = 'ㄱㄲㄴㄷㄸㄹㅁㅂㅃㅅㅆㅇㅈㅉㅊㅋㅌㅍㅎ';
    let res = '';

    for (let i = 0, len = s.length; i < len; i++) {
        let code = (s.charCodeAt(i) - 44032) / 588;

        res += choseong.charAt(code);
    }

    return res;
}

main();