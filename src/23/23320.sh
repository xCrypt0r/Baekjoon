: '
23320. 홍익 절대평가

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,320 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 1일
'

main() {
    local N A X Y

    read N
    read -a A
    read X Y

    local count_relative=$(( N * X / 100 ))
    local count_absolute=0

    for a in ${A[@]}; do
        if (( a >= Y )); then
            (( count_absolute++ ))
        fi
    done

    echo "$count_relative $count_absolute"
}

main