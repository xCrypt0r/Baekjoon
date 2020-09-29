import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    val limit: Long = scanner.nextLong()
    scanner.close()

    println(factorial(limit))
}

fun factorial(arg: Long): Long {
    return if (arg == 1L || arg == 0L) {
        1L
    } else {
        arg * factorial(arg - 1)
    }
}
