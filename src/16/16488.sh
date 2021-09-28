: '
16488. 피카츄가 낸 어려운 문제

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,260 KB
소요 시간: 8 ms
해결 날짜: 2021년 9월 29일
'

main() {
    read N K

    res=$(( N * N * K ))

    echo $res
}

main