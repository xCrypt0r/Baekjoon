: '
17598. Animal King Election

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,268 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 10일
'

main() {
    local s c=0

    for (( i = 0; i < 9; i++ )); do
        read s

        [[ $s == 'Lion' ]] && (( c++ ))
    done

    (( c >= 5 )) && echo 'Lion' || echo 'Tiger'
}

main