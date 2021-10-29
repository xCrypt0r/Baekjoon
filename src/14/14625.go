/**
 * 14625. 냉동식품
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 916 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 10월 29일
 */

package main

import "fmt"

func main() {
    var startH, startM, endH, endM, n int

    fmt.Scan(&startH, &startM, &endH, &endM, &n)

    count := 0

    for {
        if startH % 10 == n || startM % 10 == n || startH / 10 == n || startM / 10 == n {
            count++;
        }

        if startH == endH && startM == endM {
            break
        }

        startM++;

        if startM == 60 {
            startM = 0;
            startH++;
        }
    }

    fmt.Println(count)
}