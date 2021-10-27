/**
 * 7947. Koncert
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 996 KB
 * 소요 시간: 408 ms
 * 해결 날짜: 2021년 10월 27일
 */

package main

import (
	"fmt"
	"math"
)

func main(){
    var T int
    var r, g, b float64

    fmt.Scan(&T)

    for i := 0; i < T; i++ {
        x, y, z := 0.0, 0.0, 0.0

        for j := 0; j < 10; j++ {
            fmt.Scan(&r, &g, &b)

            x += r
            y += g
            z += b
        }

        fmt.Println(math.Round(x / 10), math.Round(y / 10), math.Round(z / 10))
    }
}