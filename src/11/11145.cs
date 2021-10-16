/**
 * 11145. Is it a Number?
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,356 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 10월 17일
 */

using System;
using System.Text.RegularExpressions;

class Program
{
    public static void Main()
    {
        var T = int.Parse(Console.ReadLine());
        var rgx = new Regex(@"^\d+$");
        var rgxLeadingZeros = new Regex(@"^0+(\d)");

        while (T-- > 0)
        {
            var S = Console.ReadLine().Trim(' ');

            Console.WriteLine(rgx.IsMatch(S) ? rgxLeadingZeros.Replace(S, "$1") : "invalid input");
        }
    }
}