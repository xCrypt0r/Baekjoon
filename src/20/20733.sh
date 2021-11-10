: '
20733. Triple Texting

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,272 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 10일
'

main() {
    local s

    read s

    local n=$(( ${#s} / 3))
    local a=${s:0:$n}
    local b=${s:$n:$n}
    local c=${s:$(( n * 2 ))}

    [[ $a == $b ]] && echo $a || echo $c
}

main