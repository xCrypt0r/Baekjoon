/**
 * 1932. 정수 삼각형
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 14,076 KB
 * 소요 시간: 136 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;

class Program
{
    static void Main()
    {
        var n = int.Parse(Console.ReadLine());
        var dp = new int[n + 1, n + 1];
        var max = 0;

        for (var i = 1; i <= n; i++)
        {
            var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            for (var j = 1; j <= i; j++)
            {
                dp[i, j] = input[j - 1];
            }
        }

        for (var i = 2; i <= n; i++)
        {
            for (var j = 1; j <= i; j++)
            {
                if (j == 1)
                {
                    dp[i, j] += dp[i - 1, j];
                }
                else if (j == i)
                {
                    dp[i, j] += dp[i - 1, j - 1];
                }
                else
                {
                    dp[i, j] += Math.Max(dp[i - 1, j - 1], dp[i - 1, j]);
                }
            }
        }

        for (var i = 1; i <= n; i++)
        {
            max = Math.Max(max, dp[n, i]);
        }

        Console.WriteLine(max);
    }
}
