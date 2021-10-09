/**
 * 15988. 1, 2, 3 더하기 3
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 13,812 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2021년 10월 9일
 */

using System;
using System.Text;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var T = int.Parse(Console.ReadLine());
        var N = new List<int>();
        var dp = new long[1000001];
        var res = new List<long>();

        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;

        while (T-- > 0)
        {
            N.Add(int.Parse(Console.ReadLine()));
        }

        for (var i = 4; i <= 1000000; i++)
        {
            dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
        }

        for (var i = 0; i < N.Count; i++)
        {
            res.Add(dp[N[i]]);
        }

        Console.WriteLine(new StringBuilder(string.Join("\n", res)));
    }
}