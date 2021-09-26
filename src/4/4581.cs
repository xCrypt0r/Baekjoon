/**
 * 4581. Voting
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,748 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 9월 26일
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
            var votes = Console.ReadLine();

            if (votes == "#")
            {
                Console.WriteLine(string.Join("\n", res));

                break;
            }

            var yes = 0;
            var no = 0;
            var absent = 0;
            var length = votes.Length;

            foreach (var vote in votes)
            {
                if (vote == 'Y')
                {
                    yes++;
                }
                else if (vote == 'N')
                {
                    no++;
                }
                else if (vote == 'A')
                {
                    absent++;
                }
            }

            if (length % 2 == 1)
            {
                length++;
            }

            if (absent >= length / 2)
            {
                res.Add("need quorum");
            }
            else if (yes == no)
            {
                res.Add("tie");
            }
            else if (yes > no)
            {
                res.Add("yes");
            }
            else if (yes < no)
            {
                res.Add("no");
            }
        }
    }
}