/**
 * 10872. 팩토리얼
 * 
 * 작성자: Raccoon Dog
 * 언어: Kotlin (JVM)
 * 사용 메모리: 14,240 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2020년 9월 29일
 */

import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val limit: Long = scanner.nextLong()
    scanner.close()

    println(factorial(limit))
}

fun factorial(arg: Long): Long {
    return if (arg == 1L || arg == 0L) {
        1L
    } else {
        arg * factorial(arg - 1)
    }
}
