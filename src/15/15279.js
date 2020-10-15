const fs = require('fs');

function main() {
    let [N, ...lines] = fs.readFileSync('/dev/stdin').toString().split('\n');

    lines.forEach(line => {
        let [b, p] = line.split(' ').map(x => +x);
        let bpm = 60 * b / p;
        let [min, max] = [bpm * (1 - 1 / b), bpm * (1 + 1 / b)];

        console.log(`${min.toFixed(4)} ${bpm.toFixed(4)} ${max.toFixed(4)}`);
    });
}

main();