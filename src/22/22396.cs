/**
 * 22396. カレー作り
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,840 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var res = new List<int>();

        while (true)
        {
            var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            var (R0, W0, C, R) = (input[0], input[1], input[2], input[3]);

            if (R0 == 0 && W0 == 0 && C == 0 && R == 0)
            {
                break;
            }

            if (W0 * C <= R0)
            {
                res.Add(0);
            }
            else
            {
                res.Add((W0 * C - R0 + R - 1) / R);
            }
        }

        Console.WriteLine(string.Join("\n", res));
    }
}