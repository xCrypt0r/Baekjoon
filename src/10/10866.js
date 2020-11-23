/**
 * 10866. 덱
 * 
 * 작성자: xCrypt0r
 * 언어: node.js
 * 사용 메모리: 11,676 KB
 * 소요 시간: 196 ms
 * 해결 날짜: 2020년 11월 23일
 */

const fs = require('fs');

function main() {
    let input = fs.readFileSync('/dev/stdin').toString().trim().split('\n'),
        output = '';
    let N = +input.shift();
    let deque = [];

    for (let i = 0; i < N; i++) {
        let [command, x] = input[i].split(' ');

        switch (command) {
            case 'push_front':
                deque.unshift(+x);

                break;

            case 'push_back':
                deque.push(+x);

                break;

            case 'pop_front':
                x = deque.shift();

                output += (x ? x : -1) + '\n';

                break;

            case 'pop_back':
                x = deque.pop();

                output += (x ? x : -1) + '\n';

                break;

            case 'size':
                output += deque.length + '\n';

                break;

            case 'empty':
                output += (deque.length === 0 ? 1 : 0) + '\n';

                break;

            case 'front':
                output += (deque.length === 0 ? -1 : deque[0]) + '\n';

                break;

            case 'back':
                output += (deque.length === 0 ? -1 : deque[deque.length - 1]) + '\n';

                break;
        }
    }

    process.stdout.write(output);
}

main();