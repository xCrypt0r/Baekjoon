const fs = require('fs');

function main() {
    let [N, ...lines] = fs.readFileSync('/dev/stdin').toString().split('\n');
    let list = [];

    N = +N;

    for (let i = 0; i < N; i++) {
        let [name, score] = lines[i].split(' ');

        list.push({ name: name, score: +score });
    }

    list.sort((x, y) => {
        if (x.score !== y.score) {
            return x.score > y.score ? -1 : 1;
        } else {
            return x.name < y.name ? -1 : 1;
        }
    });

    console.log(list[0].name);
}

main();
