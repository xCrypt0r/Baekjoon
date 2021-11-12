: '
6438. Reverse Text

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,276 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 12일
'

main() {
    local T s res

    read T

    while (( T-- > 0 )); do
        read s

        for (( i = ${#s} - 1; i >= 0; i-- )); do
            res+=${s:$i:1}
        done

        res+='\n'
    done

    echo -e $res
}

main