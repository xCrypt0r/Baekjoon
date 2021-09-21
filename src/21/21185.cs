/**
 * 21185. Some Sum
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,712 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 9월 21일
 */

using System;

class Program {
    public static void Main() {
        int N = int.Parse(Console.ReadLine());

        Console.WriteLine(N % 2 == 0 ? (N / 2) % 2 == 0 ? "Even" : "Odd" : "Either");
    }
}