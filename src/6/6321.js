const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let n = +input.shift();

    for (let i = 0; i < n; i++) {
        console.log(`String #${i + 1}`);
        console.log(getNextAlphabet(input[i]));
        console.log();
    }
}

function getNextAlphabet(s) {
    let res = '';

    for (let i = 0, len = s.length; i < len; i++) {
        res += String.fromCharCode(((s.charCodeAt(i) - 65) + 1) % 26 + 65);
    }

    return res;
}

main();