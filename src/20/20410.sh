: '
20410. 추첨상 사수 대작전! (Easy)

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,272 KB
소요 시간: 68 ms
해결 날짜: 2021년 10월 12일
'

main() {
    local m Seed X1 X2

    read m Seed X1 X2

    for (( a = 0; a < m; a++ )); do
        for (( c = 0; c < m; c++ )); do
            if (( (Seed * a + c) % m == X1 )) && (( (X1 * a + c) % m == X2 )); then
                echo "$a $c"

                return
            fi
        done
    done
}

main