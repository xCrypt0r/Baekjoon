/**
 * 9848. Gift
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,744 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (n, k) = (input[0], input[1]);
        var prev = 0;
        var count = 0;

        for (int i = 0; i < n; i++)
        {
            var tmp = int.Parse(Console.ReadLine());

            if (prev - tmp >= k)
            {
                count++;
            }

            prev = tmp;
        }

        Console.WriteLine(count);
    }
}