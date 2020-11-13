const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString().trim();

    console.log((N * N * 2 + N * 30 + 38) * N);
}

main();
