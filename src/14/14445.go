/**
 * 14445. 케이크(?) 자르기
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 948 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 11월 4일
 */

package main

import "fmt"

func main() {
    var N int64

    fmt.Scan(&N)

    if N == 1 {
        fmt.Println(0)
    } else {
        fmt.Println((N + 1) / 2)
    }
}