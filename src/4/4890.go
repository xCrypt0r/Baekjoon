/**
 * 4890. Tiles of Tetris, NOT!
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 912 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 10월 30일
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

    var x, y int64

    for {
        fmt.Fscan(in, &x, &y)

        if x == 0 && y == 0 {
            break
        }

        if (x < y) {
            x, y = y, x
        }

        if x % y == 0 {
            fmt.Fprintln(out, x / y)
        } else {
            fmt.Fprintln(out, x * y)
        }
    }
}