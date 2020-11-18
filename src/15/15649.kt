/**
 * 15649. N과 M (1)
 * 
 * 작성자: Raccoon Dog
 * 언어: Kotlin (JVM)
 * 사용 메모리: 72,976 KB
 * 소요 시간: 1,340 ms
 * 해결 날짜: 2020년 10월 2일
 */

import java.util.Scanner

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val k = scanner.nextInt()
    scanner.close()

    val arr = Array(k) { IntArray(n) { it + 1 } }
    val check = BooleanArray(n) { false }
    val result = IntArray(k) { 0 }

    search(arr, check, result, 0)
}

fun search(arr: Array<IntArray>, check: BooleanArray, result: IntArray, location: Int) {
    if (location == arr.size) {
        println(result.joinToString(" "))
    } else {
        for (i in arr[0].indices) {
            if (!check[i]) {
                check[i] = true
                result[location] = arr[location][i]

                search(arr, check, result, location + 1)

                check[i] = false
            }
        }
    }

    return
}
