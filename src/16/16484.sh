: '
16484. 작도하자! - ①

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,268 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 3일
'

main() {
    local n d res

    read n d

    res=$(( n * 500 - d * 1000 ))e-3

    printf '%.1f\n' $res
}

main