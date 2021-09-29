: '
9046. 복호화

작성자: xCrypt0r
언어: Bash
사용 메모리: 18,452 KB
소요 시간: 164 ms
해결 날짜: 2021년 9월 30일
'

main() {
    local T S
    local res
    declare -A freq

    read T

    while (( T-- > 0 )); do
        read S

        S=${S// }
        freq=(
            [a]=0 [b]=0 [c]=0 [d]=0 [e]=0 [f]=0
            [g]=0 [h]=0 [i]=0 [j]=0 [k]=0 [l]=0
            [m]=0 [n]=0 [o]=0 [p]=0 [q]=0 [r]=0
            [s]=0 [t]=0 [u]=0 [v]=0 [w]=0 [x]=0
            [y]=0 [z]=0
        )
        max=0
        max_index='?'

        for (( i = 0; i < ${#S}; i++ )); do
            (( freq[${S:$i:1}]++ ))
        done

        for i in {a..z}; do
            if (( freq[$i] > max )); then
                max=${freq[$i]}
            fi
        done

        for i in {a..z}; do
            if (( freq[$i] == max )); then
                if [[ $max_index == '?' ]]; then
                    max_index=$i
                else
                    max_index='?'

                    break
                fi
            fi
        done

        res="${res}${max_index}\n"
    done

    printf $res
}

main