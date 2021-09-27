/**
 * 13684. Divisão da Nlogõnia
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,288 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var res = new List<string>();

        while (true)
        {
            var K = int.Parse(Console.ReadLine());

            if (K == 0)
            {
                break;
            }

            var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            var (N, M) = (input[0], input[1]);

            for (var i = 0; i < K; i++)
            {
                var input2 = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
                var (X , Y) = (input2[0], input2[1]);

                if (X == N || Y == M)
                {
                    res.Add("divisa");
                }
                else if (X < N && Y < M)
                {
                    res.Add("SO");
                }
                else if (X < N)
                {
                    res.Add("NO");
                }
                else if (Y < M)
                {
                    res.Add("SE");
                }
                else
                {
                    res.Add("NE");
                }
            }
        }

        Console.WriteLine(string.Join("\n", res));
    }
}