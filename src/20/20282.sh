: '
20282. Game Show!

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,280 KB
소요 시간: 16 ms
해결 날짜: 2021년 11월 10일
'

main() {
    local C V
    local sum=0 res=0

    read C

    for (( i = 0; i < C; i++ )); do
        read V

        (( sum += V ))
        (( sum > res )) && res=$sum
    done

    echo $(( res + 100 ))
}

main