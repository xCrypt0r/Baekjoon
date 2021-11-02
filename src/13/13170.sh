: '
13170. 떨어진 수정

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,264 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 3일
'

main() {
    local N K P W

    read N K P W

    echo $(( (P + W - 1) / W ))
}

main