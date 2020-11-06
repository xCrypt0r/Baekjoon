const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().split('\n');
    let money = input[0].split(' ').map(x => +x).reduce((sum, val) => sum + val, 0),
        price = +input[1];
    
    console.log(money >= price * 2 ? money - price * 2 : money);
}

main();
