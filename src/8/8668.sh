: '
8668. Konik polny 2

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,264 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 3일
'

main() {
    local x s

    read x s

    (( x < s * 2 )) && echo 'TAK' || echo 'NIE'
}

main