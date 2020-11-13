const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [[N, M], ...A] = [input.shift().split(' ').map(x => +x), ...input.map(x => +x)];

    for (let i = 1; i <= M; i++) {
        for (let j = 1; j < N; j++) {
            if (A[j - 1] % i > A[j] % i) {
                [A[j - 1], A[j]] = [A[j], A[j - 1]];
            }
        }
    }
    
    process.stdout.write(A.join('\n'));
}

main();
