/**
 * 2293. 동전 1
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,780 KB
 * 소요 시간: 92 ms
 * 해결 날짜: 2021년 10월 8일
 */

using System;

class Program
{
    public static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (n, k) = (input[0], input[1]);
        var C = new int[n + 1];
        var dp = new int[k + 1];

        for (var i = 1; i <= n; i++)
        {
            C[i] = int.Parse(Console.ReadLine());
        }

        dp[0] = 1;

        for (var i = 1; i <= n; i++)
        {
            for (var j = 1; j <= k; j++)
            {
                if (j >= C[i])
                {
                    dp[j] += dp[j - C[i]];
                }
            }
        }

        Console.WriteLine(dp[k]);
    }
}