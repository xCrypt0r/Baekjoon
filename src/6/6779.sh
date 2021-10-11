: '
6779. Who Has Seen The Wind

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,276 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 11일
'

main() {
    local h M i
    local flag=0

    read h
    read M

    for (( i = 1; i <= M; i++ )); do
        if (( -6 * i ** 4 + h * i ** 3 + 2 * i ** 2 + i <= 0 )); then
            flag=1

            echo "The balloon first touches ground at hour: $i"

            break
        fi
    done

    if (( flag == 0 )); then
        echo 'The balloon does not touch ground in the given time.'
    fi
}

main