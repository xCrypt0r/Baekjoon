/**
 * 16428. A/B - 3
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 19,052 KB
 * 소요 시간: 168 ms
 * 해결 날짜: 2021년 9월 27일
 */

using System;
using System.Numerics;

class Program
{
    static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), BigInteger.Parse);
        var (A, B) = (input[0], input[1]);
        var reminder = A % B;

        if (reminder < 0)
        {
            reminder += BigInteger.Abs(B);
        }

        var quotient = (A - reminder) / B;

        Console.WriteLine(quotient);
        Console.WriteLine(reminder);
    }
}
