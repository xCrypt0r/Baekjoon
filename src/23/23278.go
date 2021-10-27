/**
 * 23278. 영화 평가
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 940 KB
 * 소요 시간: 4 ms
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

    var N, L, H int

    fmt.Fscan(in, &N, &L, &H)

    scores := make([]int, N)

    for i := 0; i < N; i++ {
        fmt.Fscan(in, &scores[i])
    }

    sort.Ints(scores)

    sum := 0.0

    for i := L; i < N - H; i++ {
        sum += float64(scores[i])
    }

    fmt.Fprint(out, sum / float64(N - L - H))
}