/**
 * 13022. 늑대와 올바른 단어
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,364 KB
 * 소요 시간: 132 ms
 * 해결 날짜: 2021년 10월 20일
 */

using System;
using System.Text.RegularExpressions;

class Program
{
    public static void Main()
    {
        var S = Console.ReadLine();
        var patterns = new string[12];

        for (var i = 1; i <= 12; i++)
        {
            patterns[i - 1] = $"w{{{i}}}o{{{i}}}l{{{i}}}f{{{i}}}";
        }

        var rgx = new Regex(string.Join("|", patterns));

        S = rgx.Replace(S, "");

        Console.WriteLine(string.IsNullOrEmpty(S) ? 1 : 0);
    }
}