/**
 * 6436. Floppies
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 924 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 10월 25일
 */

package main

import (
	"bufio"
	"fmt"
	"os"
)

const (
    maxFileSize = 62 * 30000
)

func main(){
    in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)

    defer out.Flush()

	var s int
    var i int = 0

	for {
        fmt.Fscan(in, &s)

        if s == 0 {
            break
        }

        i++
        s = (s + 1) / 2
        s += (s + 1) / 2
        res := (s + maxFileSize - 1) / maxFileSize

        fmt.Fprintf(out, "File #%d\n", i)
        fmt.Fprintf(out, "John needs %d floppies.\n\n", res)
    }
}