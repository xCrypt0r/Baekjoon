/**
 * 1012. 유기농 배추
 * 
 * 작성자: Raccoon Dog
 * 언어: Kotlin (JVM)
 * 사용 메모리: 29,396 KB
 * 소요 시간: 284 ms
 * 해결 날짜: 2020년 10월 3일
 */

import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val case = scanner.nextInt()

    repeat(case) {
        val length = scanner.nextInt()
        val width = scanner.nextInt()
        val cabbageNum = scanner.nextInt()

        val farm = Array(width) { IntArray(length) }
        var warm = 0

        repeat(cabbageNum) {
            val x = scanner.nextInt()
            val y = scanner.nextInt()

            farm[y][x] = 1
        }

        for (y in farm.indices) {
            for (x in farm[y].indices) {
                if (farm[y][x] == 1) {
                    searchCabbage(farm, x, y)

                    warm++
                }
            }
        }

        println(warm)
    }

    scanner.close()
}

fun searchCabbage(farm: Array<IntArray>, x: Int, y: Int) {
    if (x in farm[0].indices &&
        y in farm.indices &&
        farm[y][x] == 1
    ) {
        farm[y][x] = -1

        searchCabbage(farm, x - 1, y)
        searchCabbage(farm, x + 1, y)
        searchCabbage(farm, x, y - 1)
        searchCabbage(farm, x, y + 1)
    } else {
        return
    }
}
