: '
16478. 원의 분할

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,264 KB
소요 시간: 8 ms
해결 날짜: 2021년 9월 29일
'

main() {
    read a b c

    res=$(( 1000000 * a * c / b ))e-6

    printf '%.6f\n' $res
}

main