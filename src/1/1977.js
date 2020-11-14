const fs = require('fs');

function main() {
    let [M, N] = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => +x);
    let a = Math.ceil(Math.sqrt(M)),
        b = Math.floor(Math.sqrt(N));

    if (a > b) {
        console.log(-1);
    } else {
        console.log((b * (b + 1) * (b * 2  + 1) - a * (a - 1) * (a * 2 - 1)) / 6);
        console.log(a * a);
    }
}

main();