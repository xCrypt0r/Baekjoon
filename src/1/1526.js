const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString();

    for (let i = N; i > 0; i--) {
        if (is47(i)) {
            console.log(i);

            break;
        }
    }
}

function is47(n) {
    while (n) {
        let digit = n % 10;

        if (digit !== 4 && digit !== 7) {
            return false;
        }

        n = Math.floor(n / 10);
    }

    return true;
}

main();