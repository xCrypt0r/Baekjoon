: '
4589. Gnome Sequencing

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,260 KB
소요 시간: 16 ms
해결 날짜: 2021년 9월 28일
'

main() {
    read N

    echo 'Gnomes:'

    for (( i = 0; i < N; i++ )); do
        read a b c

        if ((( a <= b )) && (( b <= c ))) || ((( a >= b )) && (( b >= c ))); then
            echo 'Ordered'
        else
            echo 'Unordered'
        fi
    done
}

main