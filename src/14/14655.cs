/**
 * 14655. 욱제는 도박쟁이야!!
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 7,176 KB
 * 소요 시간: 100 ms
 * 해결 날짜: 2021년 10월 14일
 */

using System;

class Program
{
    public static void Main()
    {
        var N = int.Parse(Console.ReadLine());
        var arr = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var score = 0;

        for (int i = 0; i < N; i++)
        {
            score += Math.Abs(arr[i]);
        }

        arr = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

        for (int i = 0; i < N; i++)
        {
            score += Math.Abs(arr[i]);
        }

        Console.WriteLine(score);
    }
}