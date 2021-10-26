/**
 * 1681. 줄 세우기
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 6,708 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2021년 10월 26일
 */

package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
    var N, L int
    var label int = 0

    fmt.Scan(&N, &L)

    for i := 0; i < N; i++ {
        for {
            label++

            if !strings.Contains(strconv.Itoa(label), strconv.Itoa(L)) {
                break
            }
        }
    }

    fmt.Println(label)
}