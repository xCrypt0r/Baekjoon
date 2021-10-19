/**
 * 20332. Divvying Up
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,572 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 10월 20일
 */

using System;
using System.Linq;

class Program
{
    public static void Main()
    {
        var n = int.Parse(Console.ReadLine());
        var w = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

        Console.WriteLine(w.Sum() % 3 == 0 ? "yes" : "no");
    }
}