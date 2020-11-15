const fs = require('fs');

function main() {
    let [A, B, V] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);

    console.log(Math.ceil((V - B) / (A - B)));
}

main();
