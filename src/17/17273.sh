: '
17273. 카드 공장 (Small)

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,284 KB
소요 시간: 28 ms
해결 날짜: 2021년 11월 10일
'

main() {
    local N M A B K is_head=1

    read N M
    read A B

    for (( i = 0; i < M; i++ )); do
        read K

        if (( (is_head == 1 && A <= K) || (is_head == 0 && B <= K) )); then
            is_head=$(( 1 - is_head ))
        fi
    done

    (( is_head == 1 )) && echo $A || echo $B
}

main