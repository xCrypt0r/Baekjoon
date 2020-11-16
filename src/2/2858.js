const fs = require('fs');

function main() {
    let [R, B] = fs.readFileSync('/dev/stdin').toString().trim().split(' ').map(x => +x);
    let x = 0;

    for (let i = 3; i < 2000; i++) {
        for (let j = 3; j <= i; j++) {
            x = i * 2 + (j - 2) * 2;

            if  (x == R && i * j == x + B) {
                console.log(i, j);

                break;
            }
        }
    }
}

main();