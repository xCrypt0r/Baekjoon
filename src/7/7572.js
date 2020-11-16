const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString() + 387;
    let a = (N + 5) % 12,
        b = (N + 9) % 10;

    console.log(String.fromCharCode(65 + a) + b);
}

main();