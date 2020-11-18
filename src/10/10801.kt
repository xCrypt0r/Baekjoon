/**
 * 10801. 카드게임
 * 
 * 작성자: Raccoon Dog
 * 언어: Kotlin (JVM)
 * 사용 메모리: 21,032 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2020년 9월 30일
 */

fun main() {
    val round = Array(2) { readLine()!!.split(" ").map { it.toInt() } }

    val A = 0
    val B = 1

    var aPoint = 0
    var bPoint = 0

    for (i in 0..9) {
        when {
            round[A][i] > round[B][i] -> aPoint++
            round[A][i] == round[B][i] -> {
                aPoint++
                bPoint++
            }
            else -> bPoint++
        }
    }

    println(when {
        aPoint > bPoint -> "A"
        aPoint == bPoint -> "D"
        else -> "B"
    })
}
