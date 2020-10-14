const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n');
    let week = { 'Mon': 0, 'Tue': 1, 'Wed': 2, 'Thu': 3, 'Fri': 4 };
    let [T, N] = input.shift().split(' ').map(x => Number(x));
    let sleep = 0;

    for (let i = 0; i < N; i++) {
        let [D1, H1, D2, H2] = input[i].split(' ');

        sleep += Number(H2) - Number(H1) + (week[D2] - week[D1]) * 24;
    }

    console.log(T < sleep ? 0 : T - sleep > 48 ? -1 : T - sleep);
}

main();