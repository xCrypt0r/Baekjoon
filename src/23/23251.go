/**
 * 23251. 스물셋
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 4,860 KB
 * 소요 시간: 200 ms
 * 해결 날짜: 2021년 10월 25일
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

	var T, k int

	fmt.Fscan(in, &T)

    for i := 0; i < T; i++ {
        fmt.Fscan(in, &k)
        fmt.Fprintln(out, k * 23)
    }
}