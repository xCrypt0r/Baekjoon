const fs = require('fs');

function main() {
    let [Q, ...A] = fs.readFileSync('/dev/stdin').toString().split('\n').map(x => +x);
    let output = '';

    for (let i = 0; i < Q; i++) {
        output += (A[i] & (A[i] - 1) ? 0 : 1) + '\n';
    }

    process.stdout.write(output);
}

main();
