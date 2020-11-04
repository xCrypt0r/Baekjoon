const fs = require('fs');

function main() {
    let lines = fs.readFileSync('/dev/stdin').toString().split('\n');
    let [[N, a, b], ...X] = [lines.shift().split(' ').map(x => +x), ...lines.map(line => line.split(' ').map(x => +x))];
    let visible = X[a - 1];

    for (let i = 0; i < N; i++) {
        visible.push(X[i][b - 1]);
    }

    console.log(Math.max(...visible) === X[a - 1][b - 1] ? 'HAPPY' : 'ANGRY');
}

main();