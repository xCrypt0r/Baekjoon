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
