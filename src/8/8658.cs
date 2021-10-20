/**
 * 8658. Liczba
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,748 KB
 * 소요 시간: 92 ms
 * 해결 날짜: 2021년 10월 20일
 */

using System;

class Program
{
    public static void Main()
    {
        var n = int.Parse(Console.ReadLine());

        for (var i = 1; i <= n / 2; i++)
        {
            if (n % i != 0)
            {
                Console.Write($"{i} ");

                break;
            }
        }

        for (var i = n - 1; i >= n / 2; i--)
        {
            if (n % i != 0)
            {
                Console.Write(i);

                break;
            }
        }
    }
}