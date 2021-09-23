/**
 * 19604. Art
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,764 KB
 * 소요 시간: 92 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        int[] X = new int[N];
        int[] Y = new int[N];

        for (int i = 0; i < N; i++)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(','), int.Parse);

            X[i] = input[0];
            Y[i] = input[1];
        }

        Array.Sort(X);
        Array.Sort(Y);

        Console.WriteLine("{0},{1}", X[0] - 1, Y[0] - 1);
        Console.WriteLine("{0},{1}", X[N - 1] + 1, Y[N - 1] + 1);
    }
}