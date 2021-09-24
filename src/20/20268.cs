/**
 * 20268. Keystroke
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,732 KB
 * 소요 시간: 100 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        var T = int.Parse(Console.ReadLine());

        while (T-- > 0)
        {
            var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
            var (m, n) = (input[0], input[1]);

            Console.WriteLine(m == 2 && n == 2 ? 7 : 1);
            Console.ReadLine();
            Console.ReadLine();
        }
    }
}