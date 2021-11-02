: '
5974. Lucky Charms

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,280 KB
소요 시간: 116 ms
해결 날짜: 2021년 11월 3일
'

main() {
    local L C N S P tmp

    read L C N

    for (( i = 0 ; i < C ; i++ )); do
        read S P

        tmp=$(( P - N ))

        echo $(( ${tmp#-} + S ))
    done
}

main