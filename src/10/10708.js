const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, M, A, ...B] = [
        +input.shift(),
        +input.shift(),
        input.shift().split(' ').map(x => +x),
        ...input.map(x => x.split(' ').map(y => +y))
    ];
    let score = new Array(N).fill(0);

    for (let i = 0; i < M; i++) {
        let target = A[i];
        
        for (let j = 0; j < N; j++) {
            B[i][j] === target ? score[j]++ : score[target - 1]++;
        }
    }

    process.stdout.write(score.join('\n'));
}

main();
