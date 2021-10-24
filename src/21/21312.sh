: '
21312. 홀짝 칵테일

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,276 KB
소요 시간: 8 ms
해결 날짜: 2021년 10월 24일
'

main() {
    local cocktails
    local odd_cocktails=()
    local taste=1

    read -a cocktails

    for cocktail in ${cocktails[@]}; do
        if (( cocktail % 2 == 1 )); then
            odd_cocktails+=($cocktail)
        fi
    done

    if (( ${#odd_cocktails[@]} == 0 )); then
        for cocktail in ${cocktails[@]}; do
            taste=$(( taste * cocktail ))
        done
    else
        for odd_cocktail in ${odd_cocktails[@]}; do
            taste=$(( taste * odd_cocktail ))
        done
    fi

    echo $taste
}

main