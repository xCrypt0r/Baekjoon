const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let N = +input.shift();

    for (let i = 0; i < N; i++) {
        output += new Set(input[i]).size + '\n';
    }

    process.stdout.write(output);
}

main();