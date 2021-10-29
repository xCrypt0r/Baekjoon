: '
14683. Exactly Electrical

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,280 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 29일
'

main() {
    local a b c d t tmp

    read a b
    read c d
    read t

    tmp=$(( c - a ))
    a=${tmp#-}
    tmp=$(( d - b ))
    b=${tmp#-}

    if (( a + b > t )); then
        echo 'N'
    elif (( a + b == t || (t - (a + b)) % 2 == 0 )); then
        echo 'Y'
    else
        echo 'N'
    fi
}

main