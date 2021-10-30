/**
 * 21167. Curve Speed
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 912 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2021년 10월 30일
 */

package main

import (
	"bufio"
	"fmt"
	"io"
	"math"
	"os"
)

func main() {
    in := bufio.NewReader(os.Stdin)
    out := bufio.NewWriter(os.Stdout)

    defer out.Flush()

    var R, S float64

    for {
        _, err := fmt.Fscanln(in, &R, &S)

        if err == io.EOF {
            break
        }

        fmt.Fprintln(out, int(math.Round(math.Sqrt(R * (S + 0.16) / 0.067))))
    }
}