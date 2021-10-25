/**
 * 23080. 스키테일 암호
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 984 KB
 * 소요 시간: 36 ms
 * 해결 날짜: 2021년 10월 25일
 */

package main

import (
	"bytes"
	"fmt"
)

func main(){
    var K int
    var S string
    var res bytes.Buffer

    fmt.Scan(&K, &S)

    for i := 0; i < len(S); i += K {
        res.WriteByte(S[i])
    }

    fmt.Println(res.String())
}