: '
22938. 백발백준하는 명사수

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,264 KB
소요 시간: 20 ms
해결 날짜: 2021년 9월 29일
'

main() {
    read X1 Y1 R1
    read X2 Y2 R2

    if (( (X1 - X2) ** 2 + (Y1 - Y2) ** 2 < (R1 + R2) ** 2 )); then
        echo "YES"
    else
        echo "NO"
    fi
}

main