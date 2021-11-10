: '
23275. Knot Knowledge

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,376 KB
소요 시간: 24 ms
해결 날짜: 2021년 11월 10일
'

main() {
    local n X Y

    read n
    read -a X
    read -a Y

    for y in ${Y[@]}; do
        for i in ${!X[@]}; do
            (( X[i] == y )) && unset X[i]
        done
    done

    echo ${X[@]}
}

main