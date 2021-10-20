/**
 * 21603. K 2K 게임
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 12,736 KB
 * 소요 시간: 204 ms
 * 해결 날짜: 2021년 10월 21일
 */

using System;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (N, K) = (input[0], input[1]);
        var fk = K % 10;
        var f2k = (K * 2) % 10;
        var res = new List<int>();

        for (var i = 1; i <= N; i++)
        {
            if (i % 10 == fk || i % 10 == f2k)
            {
                continue;
            }

            res.Add(i);
        }

        Console.WriteLine(res.Count);
        Console.WriteLine(string.Join(" ", res));
    }
}