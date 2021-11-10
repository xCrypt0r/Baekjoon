: '
6993. Shift Letters

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,276 KB
소요 시간: 12 ms
해결 날짜: 2021년 11월 10일
'

main() {
    local T s n

    read T

    for (( i = 0; i < T; i++ )); do
        read s n

        echo -n "Shifting $s by $n positions gives us: ${s:$(( ${#s} - n ))}"
        echo ${s:0:$(( ${#s} - n ))}
    done
}

main