/**
 * 6324. URLs
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,312 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 12월 15일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let n = +input.shift();
    let rgx = /^(http|ftp|gopher):\/\/([\w\-.]+)(?::(\d+))?((?:\/\S+)*)?$/;

    for (let i = 0; i < n; i++) {
        let [
            ,
            protocol,
            host,
            port = '<default>',
            path = '<default>'
        ] = input[i].match(rgx);

        if (path !== '<default>') {
            path = path.slice(1);
        }

        output += [
            `URL #${i + 1}`,
            `Protocol = ${protocol}`,
            `Host     = ${host}`,
            `Port     = ${port}`,
            `Path     = ${path}\n\n`
        ].join('\n');
    }

    process.stdout.write(output);
}

main();
