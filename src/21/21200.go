/**
 * 21200. Forced Choice
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 4,008 KB
 * 소요 시간: 20 ms
 * 해결 날짜: 2021년 10월 26일
 */

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main(){
    in := bufio.NewReader(os.Stdin)
    out := bufio.NewWriter(os.Stdout)

    defer out.Flush()

    var N, P, S int

    fmt.Fscanf(in, "%d %d %d", &N, &P, &S)

    for i := 0; i < S; i++ {
        var choices = map[int]int{}
        var m int

        fmt.Fscan(in, &m)

        for j := 0; j < m; j++ {
            var chosen int

            fmt.Fscan(in, &chosen)
            choices[chosen]++
        }

        if choices[P] == 0 {
            fmt.Fprintln(out, "REMOVE")
        } else {
            fmt.Fprintln(out, "KEEP")
        }
    }
}