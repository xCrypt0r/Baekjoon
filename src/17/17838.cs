/**
 * 17838. 커맨드
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 7,092 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2021년 10월 16일
 */

using System;
using System.Text.RegularExpressions;

class Program
{
    public static void Main()
    {
        var T = int.Parse(Console.ReadLine());
        var rgx = new Regex(@"^(.)\1((?!\1).)\2\1\2\2$");

        while (T-- > 0)
        {
            Console.WriteLine(rgx.IsMatch(Console.ReadLine()) ? 1 : 0);
        }
    }
}