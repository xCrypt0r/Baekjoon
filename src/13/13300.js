const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, K] = input.shift().split(' ').map(x => +x),
        count = [[0, 0], [0, 0], [0, 0], [0, 0], [0, 0], [0, 0]],
        room = 0;

    for (let i = 0; i < N; i++) {
        let [S, Y] = input[i].split(' ').map(x => +x);

        count[Y - 1][S]++;
    }

    count.forEach(([f, m]) => {
        room += Math.ceil(f / K) + Math.ceil(m / K);
    });

    console.log(room);
}

main();
