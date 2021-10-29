/**
 * 8674. Tabliczka
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 900 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 10월 29일
 */

package main

import (
	"fmt"
	"math"
)

func main() {
    var a, b int64

    fmt.Scan(&a, &b)

    if a % 2 != 0 && b % 2 != 0 {
        fmt.Println(int(math.Min(float64(a), float64(b))))
    } else {
        fmt.Println(0)
    }
}