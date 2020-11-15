const fs = require('fs');

function main() {
    let [N, P] = fs.readFileSync('/dev/stdin').toString().split(' ').map(x => +x);
    let target = N,
        res = [N];

    while (true) {
        let idx;
        
        target = target * N % P;

        if ((idx = res.indexOf(target)) !== -1) {
            console.log(res.length - idx);

            break;
        }
        
        res.push(target);
    }
}

main();
