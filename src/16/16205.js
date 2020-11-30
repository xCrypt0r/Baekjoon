/**
 * 16205. 변수명
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 8,336 KB
 * 소요 시간: 128 ms
 * 해결 날짜: 2020년 11월 30일
 */

const fs = require('fs');

function main() {
    let [n, name] = fs.readFileSync('/dev/stdin').toString().trim().split(' ');

    console.log(toCamelCase(+n, name));
    console.log(toSnakeCase(+n, name));
    console.log(toPascalCase(+n, name));
}

function toCamelCase(n, name) {
    if (n === 2) {
        return name.replace(/(_.)/g, x => x[1].toUpperCase());
    } else if (n === 3) {
        return name.replace(/([A-Z])/, x => x.toLowerCase());
    }

    return name;
}

function toSnakeCase(n, name) {
    if (n === 1) {
        return name.replace(/[A-Z]/g, x => '_' + x.toLowerCase());
    } else if (n === 3) {
        return name
            .replace(/[A-Z]/, x => x.toLowerCase())
            .replace(/[A-Z]/g, x => '_' + x.toLowerCase());
    }

    return name;
}

function toPascalCase(n, name) {
    if (n === 1) {
        return name.replace(/[a-z]/, x => x.toUpperCase());
    } else if (n === 2) {
        return name
            .replace(/[a-z]/, x => x.toUpperCase())
            .replace(/(_[a-z])/g, x => x[1].toUpperCase());
    }

    return name;
}

main();
