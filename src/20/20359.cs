/**
 * 20359. A simple task
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,756 KB
 * 소요 시간: 100 ms
 * 해결 날짜: 2021년 10월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        var n = int.Parse(Console.ReadLine());
        var o = 1;
        var p = 0;
        var temp = 0;

        for (; (temp = (int)Math.Pow(2, p)) < n; p++)
        {
            if (n % temp == 0)
            {
                if ((n / temp) % 2 == 1)
                {
                    o = n / temp;

                    break;
                }
            }
        }

        Console.WriteLine($"{o} {p}");
    }
}