/**
 * 5076. Web Pages
 *
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,344 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2021년 10월 22일
 */

const fs = require('fs');

function main() {
    let lines = fs.readFileSync('../stdin').toString().trim().split('\n');
    let rgx_self_closing = /<([a-zA-Z]+)([^>]*)\/>/g;
    let rgx_opening = /<([a-zA-Z]+)([^>]*)>/g;
    let rgx_closing = /<\/([a-zA-Z]+)>/g;

    for (let i = 0, len = lines.length - 1; i < len; i++) {
        lines[i] = lines[i].replace(rgx_self_closing, '');

        let is_legal = true;
        let opening_tags = [...lines[i].matchAll(rgx_opening)].map(x => x[1]) || [],
            closing_tags = [...lines[i].matchAll(rgx_closing)].map(x => x[1]) || [];

        if (opening_tags.length !== closing_tags.length) {
            console.log('illegal');
        } else {
            while (opening_tags.length) {
                if (opening_tags.pop() !== closing_tags.shift()) {
                    is_legal = false;

                    break;
                }
            }

            console.log(is_legal ? 'legal' : 'illegal');
        }
    }
}

 main();