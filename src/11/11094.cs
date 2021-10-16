/**
 * 11094. 꿍 가라사대
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 8,852 KB
 * 소요 시간: 116 ms
 * 해결 날짜: 2021년 10월 17일
 */

using System;
using System.Text.RegularExpressions;

class Program
{
    public static void Main()
    {
        var N = int.Parse(Console.ReadLine());
        var rgx = new Regex(@"^Simon says");
        var res = "";

        while (N-- > 0)
        {
            var S = Console.ReadLine();

            if (rgx.IsMatch(S))
            {
                res += rgx.Replace(S, "") + "\n";
            }
        }

        Console.WriteLine(res);
    }
}