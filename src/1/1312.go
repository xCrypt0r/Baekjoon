/**
 * 1312. 소수
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 896 KB
 * 소요 시간: 24 ms
 * 해결 날짜: 2021년 11월 3일
 */

package main

import "fmt"

func main() {
    var A, B, N int

    fmt.Scan(&A, &B, &N)

    A %= B

    for i := 1; i < N; i++ {
        A = A * 10 % B
    }

    fmt.Println(A * 10 / B)
}