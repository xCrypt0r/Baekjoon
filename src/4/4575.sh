: '
4575. Refrigerator Magnets

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,300 KB
소요 시간: 28 ms
해결 날짜: 2021년 11월 12일
'

main() {
    local s uniq flag tmp res

    while true; do
        read s

        if [[ $s == 'END' ]]; then
            break
        fi

        uniq=''
        flag=1
        tmp=${s// /}

        for (( i = 0; i < ${#tmp}; i++ )); do
            if [[ $uniq =~ ${tmp:$i:1} ]]; then
                flag=0

                break
            fi

            uniq+=${tmp:$i:1}
        done

        (( flag == 1 )) && res+="$s\n"
    done

    echo -e $res
}

main