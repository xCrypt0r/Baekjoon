/**
 * 21569. Цапли
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,740 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;

class Program
{
    static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (a, b) = (input[0], input[1]);
        var x = (Math.Max(a, b) + 1) / 2;
        var y = Math.Min(a, b);

        Console.WriteLine($"{Math.Min(x, y)} {Math.Max(x, y)}");
    }
}