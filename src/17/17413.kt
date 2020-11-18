/**
 * 17413. 단어 뒤집기 2
 * 
 * 작성자: Raccoon Dog
 * 언어: Kotlin (JVM)
 * 사용 메모리: 20,616 KB
 * 소요 시간: 292 ms
 * 해결 날짜: 2020년 10월 22일
 */

fun main() {
    val str = readLine()!!
    var stackOfBracket = false
    val sb = StringBuffer()
    val resultSb = StringBuffer()

    for ((i, char) in str.withIndex()) {
        when (char) {
            '<' -> {
                if (sb.isNotEmpty()) {
                    resultSb.append(sb.reverse())
                    sb.delete(0, sb.length)
                }

                stackOfBracket = true

                sb.append(char)
            }

            '>' -> {
                stackOfBracket = false

                sb.append(char)
                resultSb.append(sb)
                sb.delete(0, sb.length)
            }

            ' ' -> {
                if (stackOfBracket) {
                    sb.append(char)
                } else if (sb.isNotEmpty()) {
                    resultSb.append(sb.reverse().append(char))
                    sb.delete(0, sb.length)
                } else {
                    resultSb.append(char)
                }
            }

            else -> {
                sb.append(char)
            }
        }

        if (i == str.length - 1 && sb.isNotEmpty()) {
            resultSb.append(sb.reverse())
            sb.delete(0, sb.length)
        }
    }

    println(resultSb)
}
