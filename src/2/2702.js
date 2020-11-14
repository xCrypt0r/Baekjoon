const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();
    let output = '';

    input = input.map(line => line.split(' ').map(x => +x));

    for (let i = 0; i < T; i++) {
        let [a, b] = input[i],
            g = gcd(a, b);

        output += a * b / g + ' ' + g + '\n';
    }

    process.stdout.write(output);
}

function gcd(x, y) {
    return y ? gcd(y, x % y) : Math.abs(x);
}

main();