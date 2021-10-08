/**
 * 1904. 01타일
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 9,640 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2021년 10월 8일
 */

using System;

class Program
{
    public static void Main()
    {
        var N = int.Parse(Console.ReadLine());
        var dp = new int[1000001];

        dp[1] = 1;
        dp[2] = 2;

        for (var i = 3; i <= N; i++)
        {
            dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
        }

        Console.WriteLine(dp[N]);
    }
}