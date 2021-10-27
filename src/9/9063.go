/**
 * 9063. 대지
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 2,476 KB
 * 소요 시간: 72 ms
 * 해결 날짜: 2021년 10월 27일
 */

package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

func main(){
    in := bufio.NewReader(os.Stdin)
	out := bufio.NewWriter(os.Stdout)

    defer out.Flush()

    var N int

    fmt.Fscan(in, &N)

    x := make([]int, N)
    y := make([]int, N)

    for i := 0; i < N; i++ {
        fmt.Fscan(in, &x[i], &y[i])
    }

    sort.Ints(x)
    sort.Ints(y)
    fmt.Println((x[N - 1] - x[0]) * (y[N - 1] - y[0]))
}