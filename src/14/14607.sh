: '
14607. 피자 (Large)

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,260 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 4일
'

main() {
    local N

    read N

    echo $(( N * (N - 1) / 2 ))
}

main