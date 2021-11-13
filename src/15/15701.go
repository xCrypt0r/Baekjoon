/**
 * 15701. 순서쌍
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 932 KB
 * 소요 시간: 8 ms
 * 해결 날짜: 2021년 11월 13일
 */

package main

import "fmt"

func main() {
    var N int;
    var res int;

    fmt.Scan(&N);

    for i := 1; i * i <= N; i++ {
        if N % i == 0 {
            if i * i == N {
                res++;

                break;
            } else {
                res += 2;
            }
        }
    }

    fmt.Println(res);
}