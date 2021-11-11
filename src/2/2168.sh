: '
2168. 타일 위의 대각선

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,272 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 11일
'

main() {
    local x y

    read x y

    local g=$(gcd $x $y)

    echo $(( g * (x / g + y / g - 1) ))
}

gcd() {
    ! (( $1 % $2 )) && echo $2 || gcd $2 $(( $1 % $2 ))
}

main