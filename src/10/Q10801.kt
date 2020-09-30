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
