/**
 * 15322. Košnja
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 2,104 KB
 * 소요 시간: 72 ms
 * 해결 날짜: 2021년 11월 3일
 */

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
    in := bufio.NewReader(os.Stdin)
    out := bufio.NewWriter(os.Stdout)

    defer out.Flush()

    var K, N, M int

    fmt.Fscan(in, &K)

    for i := 0; i < K; i++ {
        fmt.Fscan(in, &N, &M)
        fmt.Fprintln(out, (min(N, M) - 1) * 2)
    }
}

func min(x, y int) int {
    if x < y {
        return x
    }

    return y
}