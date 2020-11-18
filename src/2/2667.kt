/**
 * 2667. 단지번호붙이기
 * 
 * 작성자: Raccoon Dog
 * 언어: Kotlin (JVM)
 * 사용 메모리: 20,200 KB
 * 소요 시간: 176 ms
 * 해결 날짜: 2020년 9월 29일
 */

import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val mapSize = scanner.nextLine().toInt()
    val map = Array(mapSize) { scanner.nextLine().toCharArray().map { it.toString().toInt() }.toIntArray() }
    scanner.close()

    val complexes = searchEngine(map, mapSize)

    println(complexes)

    if (complexes > 0) {
        val houseCount = searchHouses(map, complexes).sorted()

        for (i in houseCount.indices) {
            println(houseCount[i])
        }
    } else {
        println(0)
    }
}

fun searchEngine(map: Array<IntArray>, mapSize: Int): Int {
    var complexId = 2
    var complexes = 0

    for (i in map.indices) {
        for (j in map[i].indices) {
            if (map[i][j] == 1) {
                searchMap(map, i, j, mapSize, complexId)
                complexes++
                complexId++
            }
        }
    }

    return complexes
}

fun searchMap(map: Array<IntArray>, i: Int, j: Int, mapSize: Int, complexId: Int) {
    if (i in 0 until mapSize &&
        j in 0 until mapSize &&
        map[i][j] == 1
    ) {
        map[i][j] = complexId

        searchMap(map, i - 1, j, mapSize, complexId)
        searchMap(map, i + 1, j, mapSize, complexId)
        searchMap(map, i, j - 1, mapSize, complexId)
        searchMap(map, i, j + 1, mapSize, complexId)
    } else {
        return
    }
}

fun searchHouses(map: Array<IntArray>, complexes: Int): IntArray {
    val houseCount = IntArray(complexes)

    for (i in map.indices) {
        for (j in map[i].indices) {
            if (map[i][j] >= 2) {
                houseCount[map[i][j] - 2]++
            }
        }
    }

    return houseCount
}
