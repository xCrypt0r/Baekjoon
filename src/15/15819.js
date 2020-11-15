const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, I] = input.shift().split(' ').map(x => +x);

    console.log(input.sort()[I - 1]);
}

main();