/**
 * 15415. Shattered Cake
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 920 KB
 * 소요 시간: 2,716 ms
 * 해결 날짜: 2021년 10월 27일
 */

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
    in := bufio.NewReader(os.Stdin)

    var W, N int

    fmt.Fscan(in, &W, &N)

    var res int64 = 0
    var w, l int64

    for i := 0; i < N; i++ {
        fmt.Fscan(in, &w, &l)

        res += w * l
    }

    fmt.Println(res / int64(W))
}