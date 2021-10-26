/**
 * 1436. 영화감독 숌
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 7,540 KB
 * 소요 시간: 164 ms
 * 해결 날짜: 2021년 10월 26일
 */

package main

import (
	"fmt"
	"strconv"
	"strings"
)

func main() {
    var N int
    var count int = 0
    var title int = 666

    fmt.Scan(&N)

    for {
        if strings.Contains(strconv.Itoa(title), "666") {
            count++
        }

        if count == N {
            fmt.Println(title)

            break
        }

        title++
    }
}