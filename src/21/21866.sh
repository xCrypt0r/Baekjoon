: '
21866. 추첨을 통해 커피를 받자

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,292 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 8일
'

main() {
    local input score sum=0
    local max_score=(100 100 200 200 300 300 400 400 500)
    local is_hacker=0

    read input
    read -a score <<< $input

    for (( i = 0; i < ${#score[@]}; i++ )); do
        if (( score[$i] > max_score[$i] )); then
            is_hacker=1

            break
        fi

        sum=$(( sum + score[$i] ))
    done

    if (( is_hacker )); then
        echo 'hacker'
    elif (( sum >= 100 )); then
        echo 'draw'
    else
        echo 'none'
    fi
}

main