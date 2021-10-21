/**
 * 14650. 걷다보니 신천역 삼 (Small)
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,736 KB
 * 소요 시간: 92 ms
 * 해결 날짜: 2021년 10월 22일
 */

using System;

class Program
{
    public static void Main()
    {
        var N = int.Parse(Console.ReadLine());
        var dp = new int[10];

        dp[1] = 0;
        dp[2] = 2;

        for (int i = 3; i <= N; i++)
        {
            dp[i] = dp[i - 1] * 3;
        }

        Console.WriteLine(dp[N]);
    }
}