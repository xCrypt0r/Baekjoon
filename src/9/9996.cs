/**
 * 9996. 한국이 그리울 땐 서버에 접속하지
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 6,088 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 9월 30일
 */

using System;
using System.Text.RegularExpressions;

class Program
{
    public static void Main()
    {
        var N = int.Parse(Console.ReadLine());
        var pattern = Console.ReadLine();
        var res = new string[N];
        var rgx = new Regex(@$"^{pattern.Replace("*", ".*")}$");

        for (int i = 0; i < N; i++)
        {
            res[i] = rgx.IsMatch(Console.ReadLine()) ? "DA" : "NE";
        }

        Console.WriteLine(string.Join("\n", res));
    }
}