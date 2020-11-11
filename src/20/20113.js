const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n');
    let [N, ...X] = [+input[0], ...input[1].split(' ').map(x => +x)];
    let votes = [];

    for (let i = 0; i <= N; i++) {
        votes[i] = 0;
    }

    for (let i = 0; i < N; i++) {
        votes[X[i]]++;
    }

    votes.shift();

    let max = Math.max(...votes);
    let p1 = votes.indexOf(max),
        p2 = votes.lastIndexOf(max);

    console.log(p1 !== p2 ? 'skipped' : p1 + 1);
}

main();
