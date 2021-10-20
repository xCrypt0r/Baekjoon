/**
 * 7789. 텔레프라임
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,728 KB
 * 소요 시간: 88 ms
 * 해결 날짜: 2021년 10월 20일
 */

using System;

class Program
{
    public static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (A, B) = (input[0], input[1]);

        if (IsPrime(A) && IsPrime(A + B * 1000000))
        {
            Console.WriteLine("Yes");
        }
        else
        {
            Console.WriteLine("No");
        }
    }

    public static bool IsPrime(int n)
    {
        if (n == 1)
        {
            return false;
        }

        for (int i = 2; i <= Math.Sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }

        return true;
    }
}