: '
15272. Hissing Microphone

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,264 KB
소요 시간: 8 ms
해결 날짜: 2021년 11월 3일
'

main() {
    local s

    read s

    [[ $s == *ss* ]] && echo 'hiss' || echo 'no hiss'
}

main