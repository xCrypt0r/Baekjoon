: '
2083. 럭비 클럽

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,288 KB
소요 시간: 8 ms
해결 날짜: 2021년 9월 29일
'

main() {
    while true
    do
        read name age weight

        if [[ "$name" = "#" ]] && [[ $age -eq 0 ]] && [[ $weight -eq 0 ]]
        then
            break
        fi

        if [[ $age -gt 17 ]] || [[ $weight -ge 80 ]]
        then
            echo "$name Senior"
        else
            echo "$name Junior"
        fi
    done
}

main