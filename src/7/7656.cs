/**
 * 7656. 만능 오라클
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,344 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2021년 10월 22일
 */

using System;
using System.Linq;
using System.Text.RegularExpressions;

class Program
{
    public static void Main()
    {
        var input = Console.ReadLine();
        var questions = Regex.Split(input, "What").Where(x => x.Contains("?"));

        foreach (var question in questions)
        {
            Console.WriteLine("Forty-two" + question.Substring(0, question.IndexOf("?")) + ".");
        }
    }
}