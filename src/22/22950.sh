: '
22950. 이진수 나눗셈

작성자: xCrypt0r
언어: Bash
사용 메모리: 36,952 KB
소요 시간: 160 ms
해결 날짜: 2021년 11월 13일
'

main() {
    local N M K count=0

    read N
    read M
    read K

    if (( K == 0 )); then
        echo 'YES'

        exit
    fi

    [[ $M =~ (0+)$ ]] && count=${#BASH_REMATCH[1]}
    (( count == N || count >= K )) && echo 'YES' || echo 'NO'
}

main