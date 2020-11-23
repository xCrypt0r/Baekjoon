/**
 * 10845. 큐
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 11,304 KB
 * 소요 시간: 204 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let N = +input.shift();
    let queue = [];

    for (let i = 0; i < N; i++) {
        let [command, x] = input[i].split(' ');

        switch (command) {
            case 'push':
                queue.push(+x);

                break;

            case 'pop':
                let n = queue.shift();

                output += (n ? n : -1) + '\n';

                break;

            case 'size':
                output += queue.length + '\n';

                break;

            case 'empty':
                output += (queue.length === 0 ? 1 : 0) + '\n';

                break;

            case 'front':
                output += (queue.length === 0 ? -1 : queue[0]) + '\n';

                break;

            case 'back':
                output += (queue.length === 0 ? -1 : queue[queue.length - 1]) + '\n';

                break;
        }
    }

    process.stdout.write(output);
}

main();