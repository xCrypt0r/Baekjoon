: '
16018. Occupy parking

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,272 KB
소요 시간: 12 ms
해결 날짜: 2021년 11월 10일
'

main() {
    local N p1 p2 count=0

    read N
    read p1
    read p2

    for (( i = 0; i < N; i++ )); do
        [[ ${p1:$i:1} == 'C' && ${p2:$i:1} == 'C' ]] && (( count++ ))
    done

    echo $count
}

main