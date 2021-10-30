: '
9056. Letter Bank

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,304 KB
소요 시간: 16 ms
해결 날짜: 2021년 10월 31일
'

main() {
    local T a b flag

    read T

    while (( T-- )); do
        read a b

        flag=1

        for (( i = 0; i < ${#a}; i++ )); do
            if [[ $b =~ ${a:$i:1} ]]; then
                b=${b//${a:$i:1}/}

                continue
            else
                echo "NO"

                flag=0

                break
            fi
        done

        if (( flag == 1 )); then
            if [[ -z $b ]]; then
                echo "YES"
            else
                echo "NO"
            fi
        fi
    done
}

main