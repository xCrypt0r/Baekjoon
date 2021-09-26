/**
 * 15489. 파스칼 삼각형
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,748 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;

class Program
{
    static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (R, C, W) = (input[0], input[1], input[2]);
        var dp = new int[31, 31];
        var sum = 0;

        for (int i = 1; i <= R + W - 1; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    dp[i, j] = 1;
                }
                else
                {
                    dp[i, j] = dp[i - 1, j - 1] + dp[i - 1, j];
                }
            }
        }

        for (int i = 0; i < W; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                sum += dp[R + i, C + j];
            }
        }

        Console.WriteLine(sum);
    }
}