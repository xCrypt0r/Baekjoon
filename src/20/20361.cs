/**
 * 20361. 일우는 야바위꾼
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 18,628 KB
 * 소요 시간: 152 ms
 * 해결 날짜: 2021년 10월 20일
 */

using System;

class Program
{
    public static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (N, X, K) = (input[0], input[1], input[2]);
        var A = 0;
        var B = 0;

        for (var i = 0; i < K; i++)
        {
            input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            (A, B) = (input[0], input[1]);

            if (A == X)
            {
                X = B;
            }
            else if (B == X)
            {
                X = A;
            }
        }

        Console.WriteLine(X);
    }
}