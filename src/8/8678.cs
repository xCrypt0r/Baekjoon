/**
 * 8678. Zbiór
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 74,068 KB
 * 소요 시간: 2,064 ms
 * 해결 날짜: 2021년 10월 20일
 */

using System;
using System.Text;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var z = int.Parse(Console.ReadLine());
        var input = new int[2];
        var a = 0;
        var b = 0;
        var res = new List<string>();

        while (z-- > 0)
        {
            input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            (a, b) = (input[0], input[1]);

            res.Add(b % a == 0 ? "TAK" : "NIE");
        }

        Console.WriteLine(new StringBuilder(string.Join("\n", res)));
    }
}