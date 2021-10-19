: '
21645. Ролевая игра

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,264 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 20일
'

main() {
    local n m k

    read n m k

    if (( m < k )); then
        echo $((  n * m ))
    else
        echo $(( n * ((k - 1) + m / k) ))
    fi
}

main