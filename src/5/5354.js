const fs = require('fs');

function main() {
    let [T, ...sizes] = fs.readFileSync('/dev/stdin').toString().split('\n');

    for (let size of sizes) {
        if (size < 3) {
            for (let i = 0; i < size; i++) {
                console.log('#'.repeat(size));
            }

            console.log();
        } else {
            console.log('#'.repeat(size));

            for (let i = 0; i < size - 2; i++) {
                console.log(`#${'J'.repeat(size - 2)}#`);
            }

            console.log('#'.repeat(size) + '\n');
        }
    }
}

main();
