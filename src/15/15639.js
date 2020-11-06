const fs = require('fs');

function main() {
    let action = fs.readFileSync('/dev/stdin').toString().trim();
    let actions = ['Give you up', 'Let you down', 'Run around and desert you', 'Make you cry', 'Say goodbye', 'Tell a lie and hurt you']

    console.log(actions.indexOf(action) != -1 ? 'NO' : 'YES');
}

main();
