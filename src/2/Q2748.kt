import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    scanner.close()

    println(fibonacci(n))
}

fun fibonacci(n: Int): Long {
    val fiboIndex = LongArray(n + 1)
    { when (it) {
        in 1..2 -> 1
        else -> 0
    }}

    return if (n in 1..2) {
        1
    } else {
        for(i in 3..n) {
            fiboIndex[i] = fiboIndex[i - 1] + fiboIndex[i - 2]
        }
        return fiboIndex[n]
    }
}
