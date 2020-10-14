const fs = require('fs');

function main() {
    let numbers = fs.readFileSync('/dev/stdin').toString().split('\n');
    let res = [];

    for (let number of numbers) {
        if (number == '0') {
            break;
        }

        let digital = 0;

        for (let i = 0; i < number.length; i++) {
            digital += number[i] - '0';
        }

        while (digital >= 10) {
            let temp = digital;

            digital = 0;

            for (; temp > 0; temp = Math.floor(temp / 10)) {
                digital += temp % 10;
            }
        }

        res.push(digital);
    }

    console.log(res.join('\n'));
}

main();