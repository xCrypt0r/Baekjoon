/**
 * 6751. From 1987 to 2013
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 904 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 10월 26일
 */

package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
    var Y int

    fmt.Scan(&Y)

    for {
        Y++

        if hasUniqDigits(Y) {
            break
        }
    }

    fmt.Println(Y)
}

func hasUniqDigits(n int) bool {
    s := strconv.Itoa(n)

    for _, c := range s {
        if strings.Count(s, string(c)) > 1 {
            return false
        }
    }

    return true
}