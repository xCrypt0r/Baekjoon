: '
14606. 피자 (Small)

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,268 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 4일
'

main() {
    local N dp=()

    read N

    dp[1]=0
    dp[2]=1

    for (( i = 3; i <= N; i++ )); do
        dp[i]=$(( dp[i - 1] + i - 1 ))
    done

    echo ${dp[N]}
}

main