: '
8661. Stopki

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,268 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 28일
'

main() {
    local x k a

    read x k a

    (( k > x % (k + a) )) && echo 1 || echo 0
}

main