const fs = require('fs');

function main() {
    let s = fs.readFileSync('/dev/stdin').toString().trim(),
        len = s.length,
        output = '';

    for (let i = 0; i < len; i++) {
        let code = s.charCodeAt(i);

        output += String.fromCharCode(code > 67 ? code - 3 : code + 23);
    }

    console.log(output);
}

main();
