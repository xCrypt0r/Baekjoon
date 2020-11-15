const fs = require('fs');

function main() {
    let N = parseInt(fs.readFileSync('/dev/stdin').toString().trim());
    let date = new Date('2014-4-1');

    date.setDate(date.getDate() + N);

    console.log(date.toISOString().split('T')[0]);
}

main();
