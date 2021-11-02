: '
9272. 상근이의 아이디어

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,264 KB
소요 시간: 4 ms
해결 날짜: 2021년 11월 3일
'

main() {
    local n1 n2

    read n1 n2

    echo $(( (n2 - n1) * (n2 - n1 + 1) / 2 ))
}

main