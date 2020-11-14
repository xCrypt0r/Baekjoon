const fs = require('fs');

function main() {
    let [d, m] = fs.readFileSync('/dev/stdin').toString().trim().split(' ');
    let day = new Date(`2009-${m}-${d}`).getDay();

    console.log(['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday'][day]);
}

main();
