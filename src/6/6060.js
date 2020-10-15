const fs = require('fs');

function main() {
    let [N, ...lines] = fs.readFileSync('/dev/stdin').toString().split('\n');
    let len = +N + 1;
    let X = new Array(len).fill(0),
        Y = new Array(len).fill(0);

    for (let i = 0; i < lines.length; i++) {
        let [S, D, C] = lines[i].split(' ').map(x => +x);

        X[S] = D;
        Y[S] = C;
    }

    let direction = 0,
        x = 1;

    for (let i = 0; i < N - 1; i++) {
        if (Y[x] == 1) {
            direction = 1 - direction;
        }

        x = X[x];
    }

    console.log(direction);
}

main();