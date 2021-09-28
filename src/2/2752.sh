: '
2752. 세수정렬

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,280 KB
소요 시간: 8 ms
해결 날짜: 2021년 9월 28일
'

main() {
    read x y z
    qsort $x $y $z
}

qsort() {
    local arr=("$@")
    local i j k

    for (( i = 1; i < ${#arr[@]}; i++ )); do
        k=${arr[i]}
        j=$(( i - 1 ))

        while (( j >= 0 )) && (( ${arr[$j]} > k )); do
            arr[$(( j + 1 ))]=${arr[$j]}
            (( j-- ))
        done

        arr[$(( j + 1 ))]=$k
    done

    echo ${arr[@]}
}

main