/**
 * 15651. N과 M (3)
 * 
 * 작성자: Raccoon Dog
 * 언어: Kotlin (JVM)
 * 사용 메모리: 262,468 KB
 * 소요 시간: 752 ms
 * 해결 날짜: 2020년 10월 2일
 */

import java.io.BufferedWriter
import java.io.OutputStreamWriter
import java.util.Scanner

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val k = scanner.nextInt()
    scanner.close()

    val arr = IntArray(n) { it + 1 }
    val result = IntArray(k) { 0 }

    val bw = BufferedWriter(OutputStreamWriter(System.`out`))

    search(arr, bw, result, 0)

    bw.flush()
    bw.close()
}

fun search(arr: IntArray, bw: BufferedWriter, result: IntArray, location: Int) {
    if (location == result.size) {
        bw.write(result.joinToString(" "))
        bw.newLine()
    } else {
        for (i in arr.indices) {
            result[location] = arr[i]

            search(arr, bw, result, location + 1)
        }
    }

    return
}
