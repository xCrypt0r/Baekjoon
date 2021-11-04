: '
14730. 謎紛芥索紀 (Small)

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,276 KB
소요 시간: 24 ms
해결 날짜: 2021년 11월 3일
'

main() {
    local N C K res=0

    read N

    for (( i = 0; i < N; i++ )); do
        read C K

        (( res += C * K ))
    done

    echo $res
}

main