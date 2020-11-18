/**
 * 1284. 집 주소
 * 
 * 작성자: Raccoon Dog
 * 언어: Kotlin (JVM)
 * 사용 메모리: 19,188 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2020년 9월 29일
 */

import java.util.Scanner

fun main() {
    var sum = 1
    val scanner = Scanner(System.`in`)
    while (true) {
        val numStr = scanner.next().toCharArray()

        if (numStr.joinToString("") == "0") {
            break
        } else {
            for (num in numStr) {
                when (num) {
                    '0' -> sum += 4 + 1
                    '1' -> sum += 2 + 1
                    in '2'..'9' -> sum += 3 + 1
                }
            }

            println(sum)

            sum = 1
        }
    }
    scanner.close()
}
