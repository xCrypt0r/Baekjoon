: '
20833. Kuber

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,252 KB
소요 시간: 8 ms
해결 날짜: 2021년 9월 28일
'

main() {
    read N

    local res=0

    for (( i = 1; i <= N; i++ )); do
        res=$(( res + i * i * i ))
    done

    echo $res
}

main