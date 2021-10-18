/**
 * 15786. Send me the money
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 7,000 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2021년 10월 19일
 */

using System;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (N, M) = (input[0], input[1]);
        var S = Console.ReadLine();
        var res = new List<string>();

        while (M-- > 0)
        {
            var post = Console.ReadLine();

            if (S.Length > post.Length)
            {
                res.Add("false");

                continue;
            }

            var flag = false;

            for (int i = 0, idx = 0; i < post.Length ; i++)
            {
                if (post[i] == S[idx])
                {
                    idx++;
                }

                if (idx == N)
                {
                    flag = true;

                    break;
                }
            }

            res.Add(flag ? "true" : "false");
        }

        Console.WriteLine(string.Join("\n", res));
    }
}