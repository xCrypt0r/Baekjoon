/**
 * 11052. 카드 구매하기
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,868 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;

class Program
{
    static void Main()
    {
        var N = int.Parse(Console.ReadLine());
        var input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        var P = new int[N + 1];
        var dp = new int[N + 1];

        for (var i = 1; i <= N; i++)
        {
            P[i] = input[i - 1];
        }

        for (var i = 1; i <= N; i++)
        {
            for (var j = 1; j <= i; j++)
            {
                dp[i] = Math.Max(dp[i], dp[i - j] + P[j]);
            }
        }

        Console.WriteLine(dp[N]);
    }
}