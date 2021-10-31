/**
 * 20309. 트리플 소트
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 5,848 KB
 * 소요 시간: 192 ms
 * 해결 날짜: 2021년 10월 31일
 */

package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
    in := bufio.NewReader(os.Stdin)

    var N int

    fmt.Fscan(in, &N)

    A := make([]int, N)
    flag := true

    for i := 0; i < N; i++ {
        fmt.Fscan(in, &A[i])
    }

    for i := 0; i < N; i++ {
        if i & 1 == 1 && A[i] & 1 == 1 {
            flag = false
        }
    }

    if flag {
        fmt.Println("YES")
    } else {
        fmt.Println("NO")
    }
}