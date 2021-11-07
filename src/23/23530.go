/**
 * 23530. Not A + B
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 916 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 11월 7일
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

    var t, a, b int

    fmt.Fscan(in, &t)

    for i := 0; i < t; i++ {
        fmt.Fscan(in, &a, &b)

        if a + b > 50 {
            fmt.Fprintln(out, 50)
        } else {
            fmt.Fprintln(out, 1)
        }
    }
}