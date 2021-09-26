/**
 * 22150. Шоколадка
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,108 KB
 * 소요 시간: 152 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        var t = int.Parse(Console.ReadLine());
        var res = new List<string>();

        while (t-- > 0)
        {
            var input = Console.ReadLine().Split(' ');
            var n = int.Parse(input[0]);
            var flag = false;

            for (var i = 1; i <= n; i++)
            {
                var (l, r) = (int.Parse(input[i * 2 - 1]), int.Parse(input[i * 2]));

                if (l + r != n)
                {
                    flag = true;
                }
            }

            res.Add(flag ? "yes" : "no");
        }

        Console.WriteLine(string.Join("\n", res));
    }
}