/**
 * 21339. Contest Struggles
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 908 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 10월 30일
 */

package main

import "fmt"

func main() {
    var n, k, d, s float64

    fmt.Scan(&n, &k, &d, &s)

    average := (d * n - k * s) / (n - k)

    if average >= 0 && average <= 100 {
        fmt.Printf("%.7f\n", average)
    } else {
        fmt.Println("impossible")
    }
}