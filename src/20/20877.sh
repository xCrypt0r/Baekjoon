: '
20877. Minigolf

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,280 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 11일
'

main() {
    local N X
    local numbers
    local res=0

    read N
    read X
    read -a numbers <<< "$X"

    for (( i = 0; i < N; i++ )); do
        res=$(( res + (numbers[i] > 7 ? 7 : numbers[i]) - (i % 2 ? 3 : 2) ))
    done

    echo $res
}

main