const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let n = +input[0],
        a = input[1].split(' ').map(x => +x),
        res = 0,
        x = 0;

    for (let i = 0; i < n; i++) {
        a[i] === x + 1 ? x = a[i] : res++;
    }

    console.log(res);
}

main();