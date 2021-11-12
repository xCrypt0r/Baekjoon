: '
17080. 결함 게임

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,264 KB
소요 시간: 16 ms
해결 날짜: 2021년 11월 12일
'

main() {
    local N

    read N

    (( N % 4 == 3 )) && echo 2 || echo 1
}

main