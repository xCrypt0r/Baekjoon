/**
 * 4613. Quicksum
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,696 KB
 * 소요 시간: 100 ms
 * 해결 날짜: 2021년 10월 17일
 */

using System;

class Program
{
    public static void Main()
    {
        while (true)
        {
            var S = Console.ReadLine();

            if (S == "#")
            {
                break;
            }

            var sum = 0;

            for (var i = 0; i < S.Length; i++)
            {
                if (S[i] != ' ')
                {
                    sum += (S[i] - 'A' + 1) * (i + 1);
                }
            }

            Console.WriteLine(sum);
        }
    }
}