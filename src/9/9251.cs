/**
 * 9251. LCS
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 13,012 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 10월 8일
 */

using System;

class Program
{
    public static void Main()
    {
        var dp = new int[1001, 1001];
        var A = Console.ReadLine();
        var B = Console.ReadLine();

        for (var i = 1; i <= A.Length; i++)
        {
            for (var j = 1; j <= B.Length; j++)
            {
                if (A[i - 1] == B[j - 1])
                {
                    dp[i, j] = dp[i - 1, j - 1] + 1;
                }
                else
                {
                    dp[i, j] = Math.Max(dp[i - 1, j], dp[i, j - 1]);
                }
            }
        }

        Console.WriteLine(dp[A.Length, B.Length]);
    }
}