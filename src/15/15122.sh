: '
15122. Forbidden Zero

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,272 KB
소요 시간: 480 ms
해결 날짜: 2021년 11월 10일
'

main() {
    local n

    read n

    while true; do
        (( n++ ))
        [[ "$n" != *0* ]] && break
    done

    echo $n
}

main