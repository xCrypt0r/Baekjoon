: '
6437. Golf

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,292 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 29일
'

main() {
    local p s i=0

    while true; do
        read p s

        if (( p == 0 && s == 0 )); then
            break
        fi

        (( i++ ))

        echo "Hole #$i"

        if (( s == 1 )); then
            echo -e 'Hole-in-one.\n'
        elif (( s == p - 3 )); then
            echo -e 'Double eagle.\n'
        elif (( s == p - 2 )); then
            echo -e 'Eagle.\n'
        elif (( s == p - 1 )); then
            echo -e 'Birdie.\n'
        elif (( s == p )); then
            echo -e 'Par.\n'
        elif (( s == p + 1 )); then
            echo -e 'Bogey.\n'
        else
            echo -e 'Double Bogey.\n'
        fi
    done
}

main