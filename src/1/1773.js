const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let [N, C] = input.shift().split(' ').map(x => +x);
    let visible = new Array(C + 1).fill(false),
        count = 0;

    input = input.map(x => +x);

    for (let i = 0; i < N; i++) {
        let n = input[i];

        for (let j = n; j <= C; j += n) {
            if (!visible[j]) {
                visible[j] = true;
                count++;
            }
        }
    }

    console.log(count);
}

main();