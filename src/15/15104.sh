: '
15104. Odd Palindrome

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,272 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 13일
'

main() {
    local s flag=0

    read s

    for (( i = 0; i < ${#s} - 1; i++ )); do
        if [[ ${s:$i:1} == ${s:$i+1:1} ]]; then
            flag=1

            break
        fi
    done

    (( flag == 0 )) && echo 'Odd.' || echo 'Or not.'
}

main