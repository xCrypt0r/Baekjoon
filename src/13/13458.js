const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = parseInt(input[0]);
    let A = input[1].split(' ').map(x => parseInt(x));
    let [B, C] = input[2].split(' ').map(x => parseInt(x));
    let count = N;

    for (let i = 0; i < N; i++) {
        A[i] -= B;

        if (A[i] > 0) {
            count += Math.ceil(A[i] / C);
        }
    }

    console.log(count);
}

main();
