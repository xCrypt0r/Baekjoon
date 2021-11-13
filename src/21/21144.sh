: '
21144. Missing Number

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,268 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 13일
'

main() {
    local n nums

    read n
    read nums

    for (( i = 1; i <= n; i++ )); do
        if [[ $nums == $i* ]]; then
            nums=${nums#$i}
        else
            echo $i
        fi
    done
}

main