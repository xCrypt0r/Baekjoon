: '
19939. 박 터뜨리기

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,268 KB
소요 시간: 16 ms
해결 날짜: 2021년 11월 3일
'

main() {
    local N K

    read N K

    (( N -= K * (K + 1) / 2 ))

    if (( N < 0 )); then
        echo -1
    elif (( N % K == 0 )); then
        echo $(( K - 1 ))
    else
        echo $K
    fi
}

main