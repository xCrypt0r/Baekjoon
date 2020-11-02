const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString();

    if (N & 1) {
        let space = Math.floor(N / 2);

        console.log('*'.repeat(N));
        console.log(' '.repeat(space) + '*');

        for (let i = 1; i <= Math.floor(N / 2); i++) {
            console.log(' '.repeat(space - i) + '*' + ' '.repeat(N - space * 2 + i * 2 - 2) + '*');
        }
    } else {
        console.log('I LOVE CBNU');
    }
}

main();