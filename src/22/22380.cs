/**
 * 22380. 割り勘
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,952 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;
using System.Text;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var res = new List<int>();

        while (true)
        {
            var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            var (N, M) = (input[0], input[1]);

            if (N == 0 && M == 0)
            {
                break;
            }

            var A = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            var cost = M / N;
            var total = 0;

            for (var i = 0; i < N; i++)
            {
                total += A[i] < cost ? A[i] : cost;
            }

            res.Add(total);
        }

        Console.WriteLine(new StringBuilder(string.Join("\n", res)));
    }
}