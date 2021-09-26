/**
 * 22151. Игра
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,852 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        var n = int.Parse(Console.ReadLine());
        var res = new List<string>();

        while (n-- > 0)
        {
            var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            var (m, xs, ys, xf, yf) = (input[0], input[1], input[2], input[3], input[4]);

            res.Add(Math.Abs(xf - xs) + Math.Abs(yf - ys) > m ? "Infinity" : "First 1");
        }

        Console.WriteLine(string.Join("\n", res));
    }
}
