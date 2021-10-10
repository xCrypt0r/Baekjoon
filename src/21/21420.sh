: '
21420. Монетки

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,276 KB
소요 시간: 20 ms
해결 날짜: 2021년 10월 10일
'

main() {
    local n x
    local c1=0 c2=0

    read n

    while (( n-- > 0 )); do
        read x

        if (( x == 1 )); then
            (( c1++ ))
        else
            (( c2++ ))
        fi
    done

    echo $(( c1 < c2 ? c1 : c2 ))
}

main