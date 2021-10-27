/**
 * 22966. 가장 쉬운 문제를 찾는 문제
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 892 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2021년 10월 27일
 */

package main

import "fmt"

func main() {
    var N int

    fmt.Scan(&N)

    var title string
    var level int
    var minLevel int = 5
    var answer string = ""

    for i := 0; i < N; i++ {
        fmt.Scan(&title, &level)

        if level < minLevel {
            minLevel = level
            answer = title
        }
    }

    fmt.Println(answer)
}