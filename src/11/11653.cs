/**
 * 11653. 소인수분해
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,736 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());

        Factorization(N);
    }

    public static void Factorization(int n)
    {
        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                Console.WriteLine(i);
                n /= i;
            }
        }

        if (n > 1)
        {
            Console.WriteLine(n);
        }
    }
}