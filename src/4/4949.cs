/**
 * 4949. 균형잡힌 세상
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 12,292 KB
 * 소요 시간: 380 ms
 * 해결 날짜: 2021년 9월 23일
 */

using System;
using System.Text.RegularExpressions;

class Program
{
    public static void Main()
    {
        Regex rgx = new Regex(@"[^\(\)\[\]]");

        while (true)
        {
            string input = Console.ReadLine();

            if (input == ".")
            {
                break;
            }

            input = rgx.Replace(input, "");

            while (input.Contains("[]") || input.Contains("()"))
            {
                input = input.Replace("[]", "");
                input = input.Replace("()", "");
            }

            Console.WriteLine(input != "" ? "no" : "yes");
        }
    }
}