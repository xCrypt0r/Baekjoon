/**
 * 22388. 改元
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,176 KB
 * 소요 시간: 100 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        var res = new List<string>();

        while (true)
        {
            var input = Console.ReadLine().Split(' ');
            var g = input[0];

            if (g == "#")
            {
                break;
            }

            var (y, m, d) = (int.Parse(input[1]), int.Parse(input[2]), int.Parse(input[3]));

            if (y >= 32)
            {
                res.Add($"? {y - 30} {m} {d}");
            }
            else if (y == 31 && m >= 5)
            {
                res.Add($"? 1 {m} {d}");
            }
            else
            {
                res.Add($"{g} {y} {m} {d}");
            }
        }

        Console.WriteLine(string.Join("\n", res));
    }
}