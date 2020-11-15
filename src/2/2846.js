const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input[0],
        P = input[1].split(' ').map(x => +x);
    let flag = false,
        prev = P[0],
        start = P[0],
        max = 0;

    for (let i = 1; i < N; i++) {
        if (P[i] > prev) {
            flag = true;
        } else {
            flag = false;
            start = P[i];
        }

        if (flag) {
            let len = P[i] - start;
            if (len > max) {
                max = len;
            }
        }

        prev = P[i];
    }

    console.log(max);
}

main();
