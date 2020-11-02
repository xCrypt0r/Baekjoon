const fs = require('fs');

function main() {
    let N = +fs.readFileSync('/dev/stdin').toString(),
        mod = N % 14;

    N = Math.floor(N / 14);

    switch (mod) {
        case 1: case 13:
            console.log('baby');

            break;
        case 0: case 2: case 14:
            console.log('sukhwan');

            break;
        case 5:
            console.log('very');

            break;
        case 6:
            console.log('cute');

            break;
        case 9:
            console.log('in');

            break;
        case 10:
            console.log('bed');

            break;
        case 3: case 7: case 11:
            if (N < 3) {
                console.log('tururu' + 'ru'.repeat(N));
            } else {
                console.log(`tu+ru*${N + 2}`);
            }

            break;
        case 4: case 8: case 12:
            if (N < 4) {
                console.log('turu' + 'ru'.repeat(N));
            } else {
                console.log(`tu+ru*${N + 1}`);
            }

            break;
    }
}

main();