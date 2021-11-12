: '
8974. 희주의 수학시험

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,372 KB
소요 시간: 28 ms
해결 날짜: 2021년 11월 12일
'

main() {
    local A B nums=() tmp=1 count=1 sum=0

    read A B

    for (( i = 0; i < B; i++ )); do
        nums+=($tmp)

        if (( count == tmp )); then
            (( tmp++ ))
            count=0
        fi

        (( count++ ))
    done

    for (( i = A - 1; i < B; i++ )); do
        (( sum += nums[i] ))
    done

    echo $sum
}

main