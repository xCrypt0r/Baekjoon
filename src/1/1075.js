const fs = require('fs');

function main() {
    let [N, F] = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => +x);

    N = Math.floor(N / 100) * 100;

    for (let i = 0; i < 100; i++) {
        if ((N + i) % F === 0) {
            console.log((i + '').padStart(2, '0'));

            break;
        }
    }
}

main();
