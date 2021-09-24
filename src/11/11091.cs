/**
 * 11091. 알파벳 전부 쓰기
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,836 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;
using System.Collections.Generic;

class Program
{
    public static void Main()
    {
        var N = int.Parse(Console.ReadLine());

        for (var i = 0; i < N; i++)
        {
            var input = Console.ReadLine().ToLower();
            var isPangram = true;
            var missing = new List<char>();

            for (var j = 0; j < 26; j++)
            {
                if (input.IndexOf(Convert.ToChar(j + 97)) == -1)
                {
                    isPangram = false;
                    missing.Add(Convert.ToChar(j + 97));
                }
            }

            if (isPangram)
            {
                Console.WriteLine("pangram");
            }
            else
            {
                Console.WriteLine("missing {0}", string.Join("", missing));
            }
        }
    }
}