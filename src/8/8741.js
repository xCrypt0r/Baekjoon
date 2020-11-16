const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString();

    process.stdout.write(new Array(N + 1).join('1') + new Array(N).join('0'));
}

main();