/**
 * 21105. New Financial Year
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 1,192 KB
 * 소요 시간: 24 ms
 * 해결 날짜: 2021년 11월 10일
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

    var N int
    var P, C float64

    fmt.Fscan(in, &N)

    for i := 0; i < N; i++ {
        fmt.Fscan(in, &P, &C)
        fmt.Fprintln(out, P / (C + 100) * 100)
    }
}