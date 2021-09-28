: '
16171. 나는 친구가 적다 (Small)

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,268 KB
소요 시간: 8 ms
해결 날짜: 2021년 9월 29일
'

main() {
    read S
    read K

    S=${S//[^a-zA-Z]/}

    [[ $S == *$K* ]] && echo 1 || echo 0
}

main