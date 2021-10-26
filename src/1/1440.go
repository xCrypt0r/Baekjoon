/**
 * 1440. 타임머신
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 920 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 10월 26일
 */

package main

import "fmt"

func main() {
    var a, b, c int

    fmt.Scanf("%d:%d:%d", &a, &b, &c)

    time := [3]int{a, b, c}
    count := 0

    for h := 0; h < 3; h++ {
        for m := 0; m < 3; m++ {
            for s := 0; s < 3; s++ {
                if h != m && h != s && m != s {
                    if in(time[h], 1, 12) && in(time[m], 0, 59) && in(time[s], 0, 59) {
                        count++
                    }
                }
            }
        }
    }

    fmt.Println(count)
}

func in(n, x, y int) bool {
    return n >= x && n <= y
}