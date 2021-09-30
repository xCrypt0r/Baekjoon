/**
 * 7120. String
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,344 KB
 * 소요 시간: 156 ms
 * 해결 날짜: 2021년 10월 1일
 */

using System;
using System.Text.RegularExpressions;

class Program
{
    public static void Main()
    {
        var S = Console.ReadLine();
        var rgx = new Regex(@"([a-z])\1+");

        Console.WriteLine(S = rgx.Replace(S, "$1"));
    }
}