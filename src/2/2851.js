const fs = require('fs');

function main() {
    let score = fs.readFileSync('/dev/stdin').toString().trim().split('\n').map(x => +x),
        total = [];

    for (let i = 1; i <= 10; i++) {
        total.push(getSumOfArray(score, 0, i));
    }

    let abs = total.map(x => Math.abs(100 - x)),
        idx = abs.lastIndexOf(Math.min(...abs));

    console.log(total[idx]);
}

function getSumOfArray(arr, start, end) {
    let sum = 0;

    for (let i = start; i < end; i++) {
        sum += arr[i];
    }

    return sum;
}

main();
