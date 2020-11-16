const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let N = +input[0],
        files = input[1].split(' ').map(x => +x),
        cluster = +input[2];
    let size = 0;

    for (let i = 0, len = files.length; i < len; i++) {
        size += cluster * Math.ceil(files[i] / cluster);
    }

    console.log(size);
}

main();