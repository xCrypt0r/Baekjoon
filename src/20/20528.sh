: '
20528. 끝말잇기

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,396 KB
소요 시간: 352 ms
해결 날짜: 2021년 9월 30일
'

main() {
    local N S
    local words first
    local flag=1

    read N
    read S
    read -a words <<< "$S"

    for word in ${words[@]}; do
        if [[ -z $first ]]; then
            first=${word:0:1}
        else
            if [[ $first != ${word:0:1} ]]; then
                flag=0

                break
            fi
        fi
    done

    echo $flag
}

main