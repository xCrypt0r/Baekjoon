const fs = require('fs');

function main() {
    let lines = fs.readFileSync('/dev/stdin').toString().split('\n');
    let [a, b] = lines[0].split(' '),
        [c, d] = lines[1].split(' ');
    let res = [a / c + b / d, c / d + a / b, d / b + c / a, b / a + d / c];

    console.log(res.indexOf(Math.max(...res)));
}

main();