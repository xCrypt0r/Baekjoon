: "
5102. Sarah's Toys

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,280 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 13일
"

main() {
    local A B
    local pair trio

    while true; do
        read A B

        if (( A == 0 )) && (( B == 0 )); then
            break
        fi

        A=$(( A - B ))
        pair=$(( A / 2 - A % 2 ))
        pair=$(( pair > 0 ? pair : 0 ))
        trio=$(( A <= 1 ? 0 : A % 2 ))

        echo "$pair $trio"
    done
}

main