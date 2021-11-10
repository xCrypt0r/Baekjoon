: '
15184. Letter Count

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,316 KB
소요 시간: 24 ms
해결 날짜: 2021년 11월 10일
'

main() {
    local S
    declare -A freq

    freq=(
        [A]=0 [B]=0 [C]=0 [D]=0 [E]=0 [F]=0
        [G]=0 [H]=0 [I]=0 [J]=0 [K]=0 [L]=0
        [M]=0 [N]=0 [O]=0 [P]=0 [Q]=0 [R]=0
        [S]=0 [T]=0 [U]=0 [V]=0 [W]=0 [X]=0
        [Y]=0 [Z]=0
    )

    read S

    S=${S^^}
    S=${S//[^A-Z]/}

    for (( i = 0; i < ${#S}; i++ )); do
        (( freq[${S:$i:1}]++ ))
    done

    for key in {A..Z}; do
        echo -n "$key | "

        for (( i = 0; i < ${freq[$key]}; i++ )); do
            echo -n "*"
        done

        echo
    done
}

main