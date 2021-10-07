/**
 * 22864. 피로도
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,744 KB
 * 소요 시간: 100 ms
 * 해결 날짜: 2021년 10월 8일
 */

using System;

class Program
{
    public static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (A, B, C, M) = (input[0], input[1], input[2], input[3]);
        var fatigue = 0;
        var work = 0;

        for (var i = 1; i <= 24; i++)
        {
            if (fatigue + A > M)
            {
                fatigue -= C;
                fatigue = Math.Max(0, fatigue);
            }
            else
            {
                fatigue += A;
                work += B;
            }
        }

        Console.WriteLine(work);
    }
}