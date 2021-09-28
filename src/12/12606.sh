: '
12606. Reverse Words (Large)

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,332 KB
소요 시간: 1,420 ms
해결 날짜: 2021년 9월 29일
'

main() {
    read N

    for (( i = 1; i <= N; i++ ))
    do
        read line
        read -a words <<< $line

        res=$(reverse_array ${words[@]})

        echo "Case #$i: $res"
    done
}

reverse_array() {
    local arr=("$@")
    local res=()

    for (( i = ${#arr[@]} - 1; i >= 0; i-- ))
    do
        res+=(${arr[i]})
    done

    echo ${res[@]}
}

main