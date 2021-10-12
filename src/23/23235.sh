: '
23235. The Fastest Sorting Algorithm In The World

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,320 KB
소요 시간: 32 ms
해결 날짜: 2021년 10월 12일
'

main() {
    local X i=0
    local res

    while true; do
        read X

        if [[ $X == '0' ]]; then
            break
        fi

        (( i++ ))

        res="${res}Case ${i}: Sorting... done!\n"
    done

    printf "$res"
}

main