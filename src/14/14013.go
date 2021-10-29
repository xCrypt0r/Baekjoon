/**
 * 14013. Unit Conversion
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 3,448 KB
 * 소요 시간: 196 ms
 * 해결 날짜: 2021년 10월 29일
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

    var x, y float64
    var N int
    var z float64
    var q string

    fmt.Fscan(in, &x, &y, &N)

    for i := 0; i < N; i++ {
        fmt.Fscan(in, &z, &q)

        if q == "A" {
            fmt.Fprintln(out, y * z / x)
        } else if q == "B" {
            fmt.Fprintln(out, x * z / y)
        }
    }
}