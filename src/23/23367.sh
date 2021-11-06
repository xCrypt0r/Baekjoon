: '
23367. Dickensian Dictionary

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,296 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 7일
'

main() {
    local left='qwertasdfgzxcvb'
    local right='yuiophjklnm'
    local s
    local flag=1 prev=-1 cur=0

    read s

    for (( i = 0; i < ${#s}; i++ )); do
        if [[ $left =~ ${s:$i:1} ]]; then
            cur=0
        else
            cur=1
        fi

        if (( prev == cur )); then
            flag=0
        fi

        prev=$cur

        if (( flag == 0 )); then
            break
        fi
    done

    (( flag == 1 )) && echo 'yes' || echo 'no'
}

main