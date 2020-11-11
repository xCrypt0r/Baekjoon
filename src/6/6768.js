const fs = require('fs');

function main() {
    let J = +fs.readFileSync('/dev/stdin').toString();

    console.log(J < 3 ? 0 : (J - 1) * (J - 2) * (J - 3) / 6);
}

main();
