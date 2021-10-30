/**
 * 15079. Arggggggh!
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 936 KB
 * 소요 시간: 28 ms
 * 해결 날짜: 2021년 10월 30일
 */

package main

import (
	"fmt"
	"math"
)

func main() {
    var n int
    var dir string
    var x, y, d float64

    fmt.Scan(&n, &x, &y)

    for i := 0; i < n - 1; i++ {
        fmt.Scan(&dir, &d)

        if len(dir) == 1 {
            if dir == "N" {
                y += d
            } else if dir == "E" {
                x += d
            } else if dir == "W" {
                x -= d
            } else if dir == "S" {
                y -= d
            }
        } else {
            d = math.Sqrt(d * d / 2)

            for _, v := range dir {
                if v == 'N' {
                    y += d
                } else if v == 'E' {
                    x += d
                } else if v == 'W' {
                    x -= d
                } else if v == 'S' {
                    y -= d
                }
            }
        }
    }

    fmt.Printf("%.8f %.8f\n", x, y)
}