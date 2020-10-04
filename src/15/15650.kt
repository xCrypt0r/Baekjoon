import java.util.Scanner

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    val k = scanner.nextInt()
    scanner.close()

    val arr = Array(k) { IntArray(n) { it + 1 } }
    val check = BooleanArray(n) { false }
    val result = IntArray(k) { 0 }

    search(arr, check, result, 0, 0)
}

fun search(arr: Array<IntArray>, check: BooleanArray, result: IntArray, location: Int, index: Int) {
    if (location == arr.size) {
        println(result.joinToString(" "))
    } else {
        for (i in index until arr[0].size) {
            if (!check[i]) {
                check[i] = true
                result[location] = arr[location][i]

                search(arr, check, result, location + 1, i + 1)

                check[i] = false
            }
        }
    }

    return
}
