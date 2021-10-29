/**
 * 17869. Simple Collatz Sequence
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 912 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 10월 29일
 */

package main

import "fmt"

func main() {
    var n uint64
    var count int = 0

    fmt.Scan(&n)

    for n != 1 {
        if (n % 2 == 0) {
            n /= 2
        } else {
            n++;
        }

        count++
    }

    fmt.Println(count)
}