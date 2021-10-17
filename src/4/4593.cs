/**
 * 4593. Rock, Paper, Scissors
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,704 KB
 * 소요 시간: 88 ms
 * 해결 날짜: 2021년 10월 17일
 */

using System;

class Program
{
    public static void Main()
    {
        while (true)
        {
            var P1 = Console.ReadLine();
            var P2 = Console.ReadLine();
            var C1 = 0;
            var C2 = 0;

            if (P1 == "E" && P2 == "E")
            {
                break;
            }

            for (int i = 0; i < P1.Length; i++)
            {
                if ((P1[i] == 'R' && P2[i] == 'S') || (P1[i] == 'S' && P2[i] == 'P') || (P1[i] == 'P' && P2[i] == 'R'))
                {
                    C1++;
                }
                else if ((P1[i] == 'R' && P2[i] == 'P') || (P1[i] == 'S' && P2[i] == 'R') || (P1[i] == 'P' && P2[i] == 'S'))
                {
                    C2++;
                }
            }

            Console.WriteLine($"P1: {C1}");
            Console.WriteLine($"P2: {C2}");
        }
    }
}