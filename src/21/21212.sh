: '
21212. Cakes

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,276 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 11일
'

main() {
    local N a b tmp min=10000

    read N

    for (( i = 0; i < N; i++ )); do
        read a b

        tmp=$(( b / a ))

        if (( min > tmp )); then
            min=$tmp
        fi
    done

    echo $min
}

main