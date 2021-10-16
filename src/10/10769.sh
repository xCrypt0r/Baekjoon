: '
10769. 행복한지 슬픈지

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,280 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 17일
'

main() {
    local S c1 c2 len

    read S

    len=${#S}
    S=${S//:-)}
    c1=$(( (len - ${#S}) / 3 ))

    len=${#S}
    S=${S//:-(}
    c2=$(( (len - ${#S}) / 3 ))

    if (( c1 == 0 && c2 == 0 )); then
        echo 'none'
    elif (( c1 == c2 )); then
        echo 'unsure'
    elif (( c1 > c2 )); then
        echo 'happy'
    else
        echo 'sad'
    fi
}

main