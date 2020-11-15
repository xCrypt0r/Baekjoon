const fs = require('fs');

function main() {
    let [a, b] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => getCoord(+x));

    console.log(Math.abs(b[0] - a[0]) + Math.abs(b[1] - a[1]));
}

function getCoord(n) {
    return [Math.ceil(n / 4), n % 4 ? n % 4 : 4];
}

main();