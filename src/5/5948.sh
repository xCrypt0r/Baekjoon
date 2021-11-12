: '
5948. Bad Random Numbers

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,272 KB
소요 시간: 12 ms
해결 날짜: 2021년 11월 12일
'

main() {
    local N visited=() count=0

    read N

    while (( !visited[N] )); do
        visited[N]=1
        N=$(( N / 100 % 10 * 10 + N / 10 % 10 ))
        (( N *= N ))
        (( count++ ))
    done

    echo $count
}

main