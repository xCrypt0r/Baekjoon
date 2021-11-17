: '
14409. Tuna

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,284 KB
소요 시간: 12 ms
해결 날짜: 2021년 11월 18일
'

main() {
    local N X P1 P2 P3 tmp res=0

    read N
    read X

    for (( i = 0; i < N; i++ )); do
        read P1 P2

        tmp=$(( P1 - P2 ))
        tmp=${tmp#-}

        if (( tmp > X )); then
            read P3

            (( res += P3 ))
        else
            res=$(( res + (P1 > P2 ? P1 : P2) ))
        fi
    done

    echo $res
}

main