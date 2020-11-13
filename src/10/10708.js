const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [[N, M], A, ...B] = [
        input.splice(0, 2).map(x => +x),
        input.shift().split(' ').map(x => +x),
        ...input.map(x => x.split(' ').map(y => +y))
    ];
    let score = [];

    for (let i = 0; i < N; i++) {
        score[i] = 0;
    }

    for (let i = 0; i < M; i++) {
        let target = A[i],
            bonus = 0;
        
        for (let j = 0; j < N; j++) {
            B[i][j] === target ? score[j]++ : bonus++;
        }

        score[target - 1] += bonus;
    }

    process.stdout.write(score.join('\n'));
}

main();
