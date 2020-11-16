const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, A] = [+input[0], input[1].split(' ').map(x => +x)];
    let max = Math.max(...A),
        res = [];

    for (let a of A) {
        res.push(max - a + 1);
    }

    console.log(res.join(' '));
}

main();