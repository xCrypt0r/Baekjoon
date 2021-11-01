: '
23303. 이 문제는 D2 입니다.

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,412 KB
소요 시간: 16 ms
해결 날짜: 2021년 11월 1일
'

main() {
    local s

    read s

    [[ ${s,,} == *d2* ]] && echo 'D2' || echo 'unrated'
}

main