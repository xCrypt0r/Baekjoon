: '
3447. 버그왕

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,268 KB
소요 시간: 8 ms
해결 날짜: 2021년 9월 30일
'

main() {
    local line

    while IFS= read -r line; do
        while [[ "$line" == *'BUG'* ]]; do
            line=${line//BUG/}
        done

        echo "$line"
    done
}

main