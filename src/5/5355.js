const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let T = +input.shift();

    for (let i = 0; i < T; i++) {
        let [n, ...operators] = input[i].split(' ');

        n = +n;

        operators.forEach(o => {
            if (o === '@') {
                n *= 3;
            } else if (o === '%') {
                n += 5;
            } else if (o === '#') {
                n -= 7;
            }
        });

        console.log(n.toFixed(2));
    }
}

main();
