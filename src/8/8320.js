const fs = require('fs');

function main() {
    let n = +fs.readFileSync('/dev/stdin').toString(),
        count = 0;
    
    for (let i = 1; i <= n; i++) {
        for (let j = i; i * j <= n; j++) {
            count++;
        }
    }

    console.log(count);
}

main();
