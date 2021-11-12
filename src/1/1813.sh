: '
1813. 논리학 교수

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,288 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 12일
'

main() {
    local N nums count=()

    read N
    read -a nums

    for (( i = 0; i < N; i++ )); do
        (( count[nums[i]]++ ))
    done

    for (( i = N; i >= 0; i-- )); do
        if (( count[i] == i )); then
            echo $i

            return
        fi
    done

    echo -1
}

main