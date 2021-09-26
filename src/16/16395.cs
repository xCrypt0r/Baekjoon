/**
 * 16395. 파스칼의 삼각형
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,756 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;

class Program
{
    static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (n, k) = (input[0], input[1]);
        var dp = new int[31, 31];

        for (int i = 1; i <= n; i++)
        {
            dp[i, 1] = 1;
            dp[i, i] = 1;
        }

        for (int i = 2; i <= n; i++)
        {
            for (int j = 2; j <= k; j++)
            {
                dp[i, j] = dp[i - 1, j - 1] + dp[i - 1, j];
            }
        }

        Console.WriteLine(dp[n, k]);
    }
}
