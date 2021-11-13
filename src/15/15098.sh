: '
15098. No Duplicates

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,284 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 13일
'

main() {
    local words uniq=()

    read -a words

    for (( i = 0; i < ${#words[@]}; i++ )); do
        for (( j = 0; j < ${#uniq[@]}; j++ )); do
            if [[ ${words[i]} == ${uniq[j]} ]]; then
                echo 'no'

                exit
            fi
        done

        uniq+=(${words[i]})
    done

    echo 'yes'
}

main