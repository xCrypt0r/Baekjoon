/**
 * 23348. 스트릿 코딩 파이터
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 936 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2021년 11월 6일
 */

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
    in := bufio.NewReader(os.Stdin)

    var A, B, C, N, a, b, c int

    fmt.Fscan(in, &A, &B, &C, &N)

    maxScore := 0

    for i := 0; i < N; i++ {
        score := 0

        for j := 0; j < 3; j++ {
            fmt.Fscan(in, &a, &b, &c)

            score += A * a + B * b + C * c
        }

        if score > maxScore {
            maxScore = score
        }
    }

    fmt.Println(maxScore)
}