: '
13623. Zero or One

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,272 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 3일
'

main() {
    local A B C

    read A B C

    if (( A != B && A != C )); then
        echo "A"
    elif (( B != A && B != C )); then
        echo "B"
    elif (( C != A && C != B )); then
        echo "C"
    else
        echo "*"
    fi
}

main