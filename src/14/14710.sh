: '
14710. 고장난 시계

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,264 KB
소요 시간: 4 ms
해결 날짜: 2021년 11월 3일
'

main() {
    local a b

    read a b

    (( a % 30 * 12 == b )) && echo 'O' || echo 'X'
}

main