: '
14219. 막대과자 포장

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,264 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 10일
'

main() {
    local n m

    read n m

    (( n * m % 3 == 0 )) && echo 'YES' || echo 'NO'
}

main