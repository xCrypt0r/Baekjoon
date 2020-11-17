const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n');
    let K = +input[0].split(' ')[1],
        A = input[1].split(',').map(x => +x);

    for (let i = 0; i < K; i++) {
        let temp = [];

        for (let j = 1, len = A.length; j < len; j++) {
            temp.push(A[j] - A[j - 1]);
        }

        A = temp;
    }

    process.stdout.write(A.join(','));
}

main();