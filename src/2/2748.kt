/**
 * 2748. 피보나치 수 2
 * 
 * 작성자: Raccoon Dog
 * 언어: Kotlin (JVM)
 * 사용 메모리: 14,616 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2020년 9월 30일
 */

import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    scanner.close()

    println(fibonacci(n))
}

fun fibonacci(n: Int): Long {
    val fiboIndex = LongArray(n + 1)
    { when (it) {
        in 1..2 -> 1
        else -> 0
    }}

    return if (n in 1..2) {
        1
    } else {
        for(i in 3..n) {
            fiboIndex[i] = fiboIndex[i - 1] + fiboIndex[i - 2]
        }
        return fiboIndex[n]
    }
}
