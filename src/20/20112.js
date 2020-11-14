const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input.shift(),
        isSator = true;

    input = input.map(line => line.split(''));

    for (let i = 0; i < N; i++) {
        for (let j = 0; j < N; j++) {
            if (input[i][j] !== input[j][i]) {
                isSator = false;

                break;
            }
        }
    }

    console.log(isSator ? 'YES' : 'NO');
}

main();