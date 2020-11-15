const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input.shift();
    let [R, S] = [1, false];

    input = input.map(line => line.split(' ').map(x => +x));

    for (let i = 0; i < N; i++) {
        let [a, b, s] = input[i];

        R = Math.floor(R / a) * b;

        if (s === 1) {
            S = !S;
        }
    }

    console.log(+S, R);
}

main();