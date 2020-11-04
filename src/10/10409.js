const fs = require('fs');

function main() {
    let [[n, t], T] = fs.readFileSync('/dev/stdin').toString().split('\n').map(x => x.split(' ').map(x => +x));
    let count = 0;

    while (T[0] && t >= T[0]) {
        t -= T.shift();
        count++;
    }

    console.log(count);
}

main();