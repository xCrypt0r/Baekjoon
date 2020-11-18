/**
 * 10451. 순열 사이클
 * 
 * 작성자: Raccoon Dog
 * 언어: Kotlin (JVM)
 * 사용 메모리: 294,080 KB
 * 소요 시간: 1,732 ms
 * 해결 날짜: 2020년 10월 3일
 */

import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val case = scanner.nextInt()

    repeat(case) {
        val size = scanner.nextInt()
        val check = BooleanArray(size) { false }
        val arr = IntArray(size) { scanner.nextInt() }
        var count = 0

        for (i in 0 until size) {
            if (!check[i]) {
                searchCycle(arr, check, i)

                count++
            }
        }

        println(count)
    }

    scanner.close()
}

fun searchCycle(arr: IntArray, check: BooleanArray, i: Int) {
    if (!check[i]) {
        check[i] = true
        searchCycle(arr, check, arr[i] - 1)
    } else {
        return
    }
}
