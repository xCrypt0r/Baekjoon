/**
 * 20233. Bicycle
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,732 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 9월 19일
 */

using System;

class Program {
    public static void Main() {
        int a = int.Parse(Console.ReadLine());
        int x = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());
        int y = int.Parse(Console.ReadLine());
        int T = int.Parse(Console.ReadLine());
        int extra1 = T >= 30 ? (T - 30) * x * 21 : 0;
        int extra2 = T >= 45 ? (T - 45) * y * 21 : 0;

        Console.WriteLine("{0} {1}", a + extra1, b + extra2);
    }
}