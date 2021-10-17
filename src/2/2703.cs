/**
 * 2703. Cryptoquote
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,848 KB
 * 소요 시간: 92 ms
 * 해결 날짜: 2021년 10월 17일
 */

using System;
using System.Text;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var T = int.Parse(Console.ReadLine());
        var res = new List<string>();

        while (T-- > 0)
        {
            var S = Console.ReadLine();
            var rule = Console.ReadLine();
            var message = "";

            for (int i = 0; i < S.Length; i++)
            {
                if (S[i] == ' ')
                {
                    message += ' ';
                }
                else
                {
                    message += rule[S[i] - 'A'];
                }
            }

            res.Add(message);
        }

        Console.WriteLine(new StringBuilder(string.Join("\n", res)));
    }
}