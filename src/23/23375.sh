: '
23375. Arm Coordination

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,272 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 18일
'

main() {
    local x y r

    read x y
    read r

    echo "$(( x - r )) $(( y - r ))"
    echo "$(( x - r )) $(( y + r ))"
    echo "$(( x + r )) $(( y + r ))"
    echo "$(( x + r )) $(( y - r ))"
}

main