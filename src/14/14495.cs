/**
 * 14495. 피보나치 비스무리한 수열
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,744 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;

class Program
{
    static void Main()
    {
        var n = int.Parse(Console.ReadLine());
        var dp = new long[117];

        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;

        for (var i = 4; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 3];
        }

        Console.WriteLine(dp[n]);
    }
}