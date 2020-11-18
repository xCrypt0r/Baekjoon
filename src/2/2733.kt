/**
 * 2733. Brainf*ck
 * 
 * 작성자: Raccoon Dog
 * 언어: Kotlin (JVM)
 * 사용 메모리: 19,608 KB
 * 소요 시간: 516 ms
 * 해결 날짜: 2020년 10월 3일
 */

import java.io.BufferedWriter
import java.io.OutputStreamWriter

class BrainFuckCompiler {
    private val pointer = ShortArray(POINTER_MAX)
    private val commands = StringBuffer()
    private var error = false

    fun commandReader() {
        var leftBracketCount = 0
        var rightBracketCount = 0

        while (true) {
            val text = readLine()!!

            if (text == "end") {
                break
            }

            loop@ for (char in text) {
                when (char) {
                    '>', '<', '+', '-', '.' -> commands.append(char)
                    '[' -> {
                        commands.append(char)

                        leftBracketCount++
                    }
                    ']' -> {
                        commands.append(char)

                        rightBracketCount++
                    }
                    '%' -> break@loop
                }

                if (rightBracketCount > leftBracketCount) {
                    break@loop
                }
            }
        }

        if (leftBracketCount != rightBracketCount) {
            error = true
        }

        return
    }

    fun commandExecution() {
        var bracketCount = 0
        var ptrIndex = 0
        val bw = BufferedWriter(OutputStreamWriter(System.`out`))

        if (error) {
            println("COMPILE ERROR")
        } else {
            var i = 0

            while (i <= commands.length - 1) {
                when (commands[i]) {
                    '>' -> {
                        if (ptrIndex == POINTER_MAX - 1) {
                            ptrIndex = 0
                        } else {
                            ptrIndex++
                        }
                    }
                    '<' -> {
                        if (ptrIndex == 0) {
                            ptrIndex = POINTER_MAX - 1
                        } else {
                            ptrIndex--
                        }
                    }
                    '+' -> {
                        if (pointer[ptrIndex] == BYTE_SIZE) {
                            pointer[ptrIndex] = 0
                        } else {
                            pointer[ptrIndex]++
                        }
                    }
                    '-' -> {
                        if (pointer[ptrIndex].toInt() == 0) {
                            pointer[ptrIndex] = BYTE_SIZE
                        } else {
                            pointer[ptrIndex]--
                        }
                    }
                    '.' -> bw.write(pointer[ptrIndex].toChar().toString())
                    '[' -> {
                        bracketCount++

                        if (pointer[ptrIndex].toInt() == 0) {
                            i = leftMover(commands, i + 1, bracketCount)
                        }
                    }
                    ']' -> {
                        if (pointer[ptrIndex].toInt() != 0) {
                            i = rightMover(commands, i - 1, bracketCount)
                        }

                        bracketCount--
                    }
                }

                i++
            }

            bw.newLine()
            bw.flush()
        }

        return
    }

    private fun leftMover(commands: StringBuffer, index: Int, leftCount: Int): Int {
        var leftBracketCount = leftCount
        var i = index

        while (leftBracketCount != leftCount - 1) {
            if (commands[i] == '[') {
                leftBracketCount++
            } else if (commands[i] == ']') {
                leftBracketCount--
            }
            i++
        }

        return i - 2
    }

    private fun rightMover(commands: StringBuffer, index: Int, rightCount: Int): Int {
        var rightBracketCount = rightCount
        var i = index

        while (rightBracketCount != rightCount - 1) {
            if (commands[i] == ']') {
                rightBracketCount++
            } else if (commands[i] == '[') {
                rightBracketCount--
            }
            i--
        }

        return i
    }

    companion object {
        const val POINTER_MAX = 32768
        const val BYTE_SIZE: Short = 255
    }
}

fun main() {
    val case = readLine()!!.toInt()
    val brainFuckCompiler = Array(case) { BrainFuckCompiler() }

    for (i in brainFuckCompiler.indices) {
        println("PROGRAM #${i + 1}:")

        brainFuckCompiler[i].commandReader()
        brainFuckCompiler[i].commandExecution()
    }
}
