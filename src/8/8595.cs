/**
 * 8595. 히든 넘버
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 33,192 KB
 * 소요 시간: 816 ms
 * 해결 날짜: 2021년 10월 19일
 */

using System;
using System.Numerics;
using System.Text.RegularExpressions;

class Program
{
    public static void Main()
    {
        var n = int.Parse(Console.ReadLine());
        var S = Console.ReadLine();
        var rgx = new Regex(@"\d+");
        var match = rgx.Match(S);
        var sum = (BigInteger)0;

        while (match.Success)
        {
            sum += BigInteger.Parse(match.Value);
            match = match.NextMatch();
        }

        Console.WriteLine(sum);
    }
}