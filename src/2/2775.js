const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    while (T--) {
        let k = +input.shift(),
            n = +input.shift();
        let count = [];

        count[0] = new Array(n).fill().map((v, i) => i + 1);

        for (let i = 1; i <= k; i++) {
            count[i] = [];

            for (let j = 1; j <= n; j++) {
                let c = count[i - 1].slice(0, j).reduce((s, v) => s + v, 0);

                count[i].push(c);
            }
        }

        console.log(count[k][n - 1]);
    }
}

main();
