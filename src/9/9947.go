/**
 * 9947. Coin tossing
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 916 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 11월 13일
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

    for {
        var a, b string;
        var n int;
        var x, y string;
        var score1, score2 int;

        fmt.Fscan(in, &a, &b);

        if a == "#" && b == "#" {
            break;
        }

        fmt.Fscan(in, &n);

        for i := 0; i < n; i++ {
            fmt.Fscan(in, &x, &y);

            if x == y {
                score1++;
            } else {
                score2++;
            }
        }

        fmt.Fprintf(out, "%s %d %s %d\n", a, score1, b, score2);
    }
}