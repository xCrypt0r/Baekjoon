/**
 * 21631. Checkers
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,728 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2021년 9월 21일
 */

using System;

class Program {
    public static void Main() {
        long[] input = Array.ConvertAll(Console.ReadLine().Split(' '), long.Parse);
        var (a, b) = (input[0], input[1]);

        Console.WriteLine(a >= b ? b : a + 1);
    }
}