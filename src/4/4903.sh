: '
4903. Relax! It’s just a game

작성자: xCrypt0r
언어: Bash
사용 메모리: 9,836 KB
소요 시간: 236 ms
해결 날짜: 2021년 11월 3일
'

main() {
    local A B

    while true; do
        read A B

        if (( A == -1 && B == -1 )); then
            break
        fi

        if (( A == 1 || B == 1 )); then
            printf '%d+%d=%d\n' $A $B $(( A + B ))
        else
            printf '%d+%d!=%d\n' $A $B $(( A + B ))
        fi
    done
}

main