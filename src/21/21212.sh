main() {
    local N a b tmp min=10000

    read N

    for (( i = 0; i < N; i++ )); do
        read a b

        tmp=$(( b / a ))

        if (( min > tmp )); then
            min=$tmp
        fi
    done

    echo $min
}

main