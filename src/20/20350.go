/**
 * 20350. Account Numbers
 *
 * 작성자: xCrypt0r
 * 언어: Go
 * 사용 메모리: 996 KB
 * 소요 시간: 4 ms
 * 해결 날짜: 2021년 10월 27일
 */

package main

import (
	"fmt"
	"math/big"
	"regexp"
	"strconv"
)

func main(){
    var IBAN string

    fmt.Scan(&IBAN)

    rgx := regexp.MustCompile(`[A-Z]`)
    IBAN = IBAN[4:] + IBAN[:4]
    IBAN = rgx.ReplaceAllStringFunc(IBAN, func(s string) string {
        return strconv.Itoa(int(s[0] - 'A' + 10))
    })
    n := new(big.Int)
    res := new(big.Int)

    n.SetString(IBAN, 10)

    if res.Mod(n, big.NewInt(97)).Cmp(big.NewInt(1)) == 0 {
        fmt.Println("correct")
    } else {
        fmt.Println("incorrect")
    }
}