: '
5220. Error Detection

작성자: xCrypt0r
언어: Bash
사용 메모리: 94,136 KB
소요 시간: 896 ms
해결 날짜: 2021년 10월 13일
'

main() {
    local D2B=({0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1}{0..1})
    local T a b bin
    local count

    read T

    while (( T-- > 0 )); do
        read a b

        bin=${D2B[$a]}
        count=0

        for (( i = 0; i < 16; i++ )); do
            if [[ ${bin:$i:1} == '1' ]]; then
                (( count++ ))
            fi
        done

        (( (count & 1) == b )) && echo 'Valid' || echo 'Corrupt'
    done
}

main