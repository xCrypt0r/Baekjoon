: '
2139. 나는 너가 살아온 날을 알고 있다

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,296 KB
소요 시간: 72 ms
해결 날짜: 2021년 11월 12일
'

main() {
    local y m d
    local days=(0 31 28 31 30 31 30 31 31 30 31 30 31)

    while true; do
        read d m y

        (( y == 0 && m == 0 && d == 0 )) && break

        for (( i = 1; i < m; i++ )); do
            (( d += days[i] ))
            (( i == 2 && $(is_leap_year $y) )) && (( d++ ))
        done

        echo $d
    done
}

is_leap_year() {
    echo $(( $1 % 4 == 0 && $1 % 100 != 0 || y % 400 == 0 ))
}

main