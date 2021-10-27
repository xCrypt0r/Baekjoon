/**
 * 13528. Grass Seed Inc.
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 928 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 10월 27일
 */

package main

import "fmt"

func main() {
    var C, w, l float64
    var S float64 = 0
    var L int

    fmt.Scan(&C, &L)

    for i := 0; i < L; i++ {
        fmt.Scan(&w, &l)

        S += w * l
    }

    fmt.Printf("%.7f\n", C * S)
}