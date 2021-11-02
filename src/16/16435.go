/**
 * 16435. 스네이크버드
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 952 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2021년 11월 3일
 */

package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func main() {
    in := bufio.NewReader(os.Stdin)

    var N, L int

    fmt.Fscan(in, &N, &L)

    H := make([]int, N)

    for i := 0; i < N; i++ {
        fmt.Fscan(in, &H[i])
    }

    sort.Ints(H)

    for _, h := range H {
        if h > L {
            break
        }

        L++
    }

    fmt.Println(L)
}