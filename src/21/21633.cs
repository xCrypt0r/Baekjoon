/**
 * 21633. Bank Transfer
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,752 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2021년 9월 21일
 */

using System;

class Program {
    public static void Main() {
        double k = double.Parse(Console.ReadLine());
        double res = k * 0.01 + 25;

        res = Math.Max(res, 100);
        res = Math.Min(res, 2000);

        Console.WriteLine("{0:F}", res);
    }
}