const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let [N, M] = input.shift().split(' ').map(x => +x);

    for (let i = 0; i < N; i++) {
        for (let j = M - 1; j > -1; j--) {
            output += input[i][j];
        }

        output += '\n';
    }

    process.stdout.write(output);
}

main();