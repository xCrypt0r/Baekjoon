/**
 * 15736. 청기 백기
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 900 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2021년 11월 4일
 */

package main

import (
	"fmt"
	"math"
)

func main() {
    var N int

    fmt.Scan(&N)
    fmt.Println(int(math.Sqrt(float64(N))))
}