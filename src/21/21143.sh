: '
21143. Magic Trick

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,288 KB
소요 시간: 12 ms
해결 날짜: 2021년 11월 10일
'

main() {
    local s
    local uniq flag=1

    read s

    for (( i = 0; i < ${#s}; i++ )); do
        if [[ $uniq =~ ${s:$i:1} ]]; then
            flag=0

            break
        fi

        uniq+=${s:$i:1}
    done

    echo $flag
}

main