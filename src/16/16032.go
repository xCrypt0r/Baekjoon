/**
 * 16032. Income Inequality
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 1,452 KB
 * 소요 시간: 24 ms
 * 해결 날짜: 2021년 11월 5일
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

    for {
        var n int

        fmt.Fscan(in, &n)

        if n == 0 {
            break
        }

        A := make([]int, n)
        sum := 0

        for i := 0; i < n; i++ {
            fmt.Fscan(in, &A[i])

            sum += A[i]
        }

        count := 0

        for i := 0; i < n; i++ {
            if A[i] * n <= sum {
                count++
            }
        }

        fmt.Fprintln(out, count)
    }
}