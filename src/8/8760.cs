/**
 * 8760. Schronisko
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,828 KB
 * 소요 시간: 92 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var Z = int.Parse(Console.ReadLine());
        var res = new List<int>();

        while (Z-- > 0)
        {
            var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            var (W, K) = (input[0], input[1]);

            res.Add(W  * K / 2);
        }

        Console.WriteLine(string.Join("\n", res));
    }
}