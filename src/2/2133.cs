/**
 * 2133. 타일 채우기
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,740 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 10월 8일
 */

using System;

class Program
{
    public static void Main()
    {
        var dp = new int[31];
        var N = int.Parse(Console.ReadLine());

        dp[2] = 3;

        for (var i = 4; i <= N; i +=2)
        {
            dp[i] += dp[i - 2] * 3;

            for (var j = i - 4; j >= 0; j -= 2)
            {
                dp[i] += dp[j] * 2;
            }

            dp[i] += 2;
        }

        Console.WriteLine(dp[N]);
    }
}