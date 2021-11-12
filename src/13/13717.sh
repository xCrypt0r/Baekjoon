: '
13717. 포켓몬 GO

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,292 KB
소요 시간: 36 ms
해결 날짜: 2021년 11월 12일
'

main() {
    local N P K M count=0 max=0 res evolution

    read N

    while (( N-- > 0 )); do
        read P
        read K M

        evolution=0

        while (( M >= K )); do
            (( M -= K - 2 ))
            (( evolution++ ))
        done

        (( count += evolution ))

        if (( evolution > max )); then
            max=$evolution
            res=$P
        fi
    done

    echo $count
    echo $res
}

main