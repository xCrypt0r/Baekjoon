/**
 * 20360. Binary numbers
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 924 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 10월 27일
 */

package main

import (
	"fmt"
	"strconv"
)

func main(){
    var n int;

    fmt.Scan(&n);

    bin := reverse(strconv.FormatInt(int64(n), 2));

    for i := 0; i < len(bin); i++ {
        if bin[i] == '1' {
            fmt.Printf("%d ", i);
        }
    }
}

func reverse(s string) string {
    runes := []rune(s)

    for i, j := 0, len(runes) - 1; i < j; i, j = i + 1, j - 1 {
        runes[i], runes[j] = runes[j], runes[i]
    }

    return string(runes)
}