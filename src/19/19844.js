const fs = require('fs');

function main() {
    let sentence = fs.readFileSync('/dev/stdin').toString();
    let words = sentence.split(/[ \-]/);
    let is_shorthand = /^(c|j|n|m|t|s|l|d|qu)'[aeiouh]/;
    let count = words.length;

    for (let word of words) {
        if (is_shorthand.test(word)) {
            count++;
        }
    }

    console.log(count);
}

main();