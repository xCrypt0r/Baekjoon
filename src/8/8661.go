/**
 * 8661. Stopki
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 932 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 10월 28일
 */

package main

import "fmt"

func main() {
    var x, k, a int

    fmt.Scan(&x, &k, &a)

    if k > (x % (k + a)) {
        fmt.Println(1)
    } else {
        fmt.Println(0)
    }
}