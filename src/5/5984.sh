: '
5984. The Bovine Fire Drill

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,292 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 4일
'

main() {
    local N x res memo=()

    read N

    while true; do
        memo[x]=1
        res=$x
        x=$(( (x * 2 + 1) % N ))

        if (( x == 0 || memo[x] == 1 )); then
            break
        fi
    done

    echo $(( res + 1 ))
}

main