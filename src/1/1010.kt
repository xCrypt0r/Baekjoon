/**
 * 1010. 다리 놓기
 * 
 * 작성자: intelli-raccoon-dog
 * 언어: Kotlin
 * 사용 메모리: 18,388 KB
 * 소요 시간: 212 ms
 * 해결 날짜: 2020년 12월 14일
 */
 
import java.util.Scanner

fun main() {
    val repeatNum = readLine()!!.toInt()
    val scanner = Scanner(System.`in`)
    val stackSize = 500

    repeat(repeatNum) {
        var w = scanner.nextLong()
        val e = scanner.nextLong()

        if (e - w < w) {
            w = e - w
        }

        var eComList = LongArray(w.toInt()) { e - w + 1 + it }
        var stackSpace = LongArray(stackSize)
        var arrayNum = 0

        var result = 1L;

        for (i in w downTo 1) {
            var num = i
            var j = 2L
            while (j <= num) {
                if (num % j == 0L) {
                    stackSpace[arrayNum] = j
                    num /= j
                    arrayNum++
                } else {
                    j++
                }
            }
        }

        for (stackValue in stackSpace) {
            arrayNum = 0

            if (stackValue != 0L) {
                while (arrayNum < eComList.size) {
                    if (eComList[arrayNum] % stackValue == 0L) {
                        eComList[arrayNum] /= stackValue
                        break
                    } else {
                        arrayNum++
                    }
                }
            } else {
                break
            }
        }

        for (element in eComList) {
            result *= element
        }

        print("${result}\n")
    }
}
