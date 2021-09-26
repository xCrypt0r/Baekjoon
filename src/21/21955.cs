/**
 * 21955. Split
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,720 KB
 * 소요 시간: 100 ms
 * 해결 날짜: 2021년 9월 26일
 */

using System;

class Program
{
    public static void Main()
    {
        var N = Console.ReadLine();
        var a = N.Substring(0, N.Length / 2);
        var b = N.Substring(N.Length / 2);

        Console.WriteLine($"{a} {b}");
    }
}