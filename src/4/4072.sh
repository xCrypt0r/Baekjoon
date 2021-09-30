: '
4072. Words

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,372 KB
소요 시간: 112 ms
해결 날짜: 2021년 9월 30일
'

main() {
    local sentence words

    while true; do
        read sentence

        if [[ $sentence == '#' ]]; then
            break
        fi

        read -a words <<< $sentence

        for word in ${words[@]}; do
            for ((i = ${#word} - 1; i >= 0; i--)); do
                echo -n ${word:$i:1}
            done

            echo -n ' '
        done

        echo
    done
}

main