const fs = require('fs');

function main() {
    let numbers = fs.readFileSync('/dev/stdin').toString().split('\n').map(x => +x);

    for (let i = 0; i < numbers.length; i++) {
        if (numbers[i] == 0) {
            break;
        }

        let [start, end] = [1, 50];
        let output = [];

        while (start <= end) {
            let middle = Math.floor((start + end) / 2);

            output.push(middle);

            if (middle > numbers[i]) {
                end = middle - 1;
            } else if (middle < numbers[i]) {
                start = middle + 1;
            } else {
                break;
            }
        }

        console.log(output.join(' '));
    }
}

main();
