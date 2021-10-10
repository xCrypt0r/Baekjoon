: '
22155. Простая задача

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,276 KB
소요 시간: 32 ms
해결 날짜: 2021년 10월 10일
'

main() {
    local n i f

    read n

    while (( n-- > 0 )); do
        read i f

        (( i + f <= 3 )) && (( i <= 2 )) && (( f <= 2 )) && echo 'Yes' || echo 'No'
    done
}

main