/**
 * 9946. 단어 퍼즐
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 19,848 KB
 * 소요 시간: 612 ms
 * 해결 날짜: 2021년 10월 17일
 */

using System;
using System.Linq;

class Program
{
    public static void Main()
    {
        var i = 0;

        while (true)
        {
            var A = Console.ReadLine();
            var B = Console.ReadLine();

            if (A == "END" && B == "END")
            {
                break;
            }

            Console.WriteLine("Case " + ++i + ": " + (SortString(A) == SortString(B) ? "same" : "different"));
        }
    }

    public static string SortString(string s)
    {
        char[] characters = s.ToArray();

        Array.Sort(characters);

        return new string(characters);
    }
}