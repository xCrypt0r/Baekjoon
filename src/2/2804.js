const fs = require('fs');

function main() {
    let [A, B] = fs.readFileSync('/dev/stdin').toString().trim().split(' ');
    let [a, b] = [A.length, B.length];
    let x, y, output = '';

    for (let i = 0; i < a; i++) {
        let p = B.indexOf(A[i]);

        if (p !== -1) {
            x = i + 1;
            y = p + 1;

            break;
        }
    }

    for (let i = 1; i <= b; i++) {
        if (i === y) {
            output += A;
        } else {
            for (let j = 1; j <= a; j++) {
                output += j === x ? B[i - 1] : '.';
            }
        }

        output += '\n';
    }

    process.stdout.write(output);
}

main();
