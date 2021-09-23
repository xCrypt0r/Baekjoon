/**
 * 5607. 問題 １
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 7,936 KB
 * 소요 시간: 120 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        int[] A = new int[n];
        int[] B = new int[n];
        int scoreA = 0;
        int scoreB = 0;

        for (int i = 0; i < n; i++)
        {
            int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

            A[i] = input[0];
            B[i] = input[1];

            if (A[i] > B[i])
            {
                scoreA += A[i] + B[i];
            }
            else if (A[i] < B[i])
            {
                scoreB += A[i] + B[i];
            }
            else
            {
                scoreA += A[i];
                scoreB += B[i];
            }
        }

        Console.WriteLine($"{scoreA} {scoreB}");
    }
}