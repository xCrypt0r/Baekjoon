/**
 * 11008. 복붙의 달인
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 7,524 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2021년 10월 17일
 */

using System;

class Program
{
    public static void Main()
    {
        var T = int.Parse(Console.ReadLine());

        while (T-- > 0)
        {
            var input = Console.ReadLine().Split(' ');
            var (s, p) = (input[0], input[1]);
            var tmp = s.Length;

            s = s.Replace(p, "");

            Console.WriteLine(s.Length + (tmp - s.Length) / p.Length);
        }
    }
}