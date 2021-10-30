: '
1434. 책 정리

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,296 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 30일
'

main() {
    local boxes books

    read
    read -a boxes
    read -a books

    local sum1=$(sum_of_array ${boxes[@]})
    local sum2=$(sum_of_array ${books[@]})

    echo $(( sum1 - sum2 ))
}

sum_of_array() {
    local sum=0

    for n in $@; do
        (( sum += n ))
    done

    echo $sum
}

main