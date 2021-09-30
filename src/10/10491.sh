: '
10491. Quite a problem

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,276 KB
소요 시간: 220 ms
해결 날짜: 2021년 9월 30일
'

main() {
    local line

    while IFS= read -r line; do
        [[ ${line,,} == *'problem'* ]] && echo 'yes' || echo 'no'
    done
}

main