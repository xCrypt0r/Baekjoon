/**
 * 10816. 숫자 카드 2
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 121,016 KB
 * 소요 시간: 1,216 ms
 * 해결 날짜: 2021년 9월 23일
 */

using System;
using System.Text;

class Program {
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());
        int[] A = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        int M = int.Parse(Console.ReadLine());
        int[] X = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        int[] res = new int[M];

        Array.Sort(A);

        for (int i = 0; i < M; i++)
        {
            res[i] = UpperBound(A, X[i]) - LowerBound(A, X[i]);
        }

        Console.WriteLine(new StringBuilder(string.Join(" ", res)));
    }

    public static int UpperBound(int[] A, int x)
    {
        int left = 0;
        int right = A.Length;

        while (left < right)
        {
            int mid = (left + right) / 2;

            if (A[mid] <= x)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }

        return left;
    }

    public static int LowerBound(int[] A, int x)
    {
        int left = 0;
        int right = A.Length;

        while (left < right)
        {
            int mid = (left + right) / 2;

            if (A[mid] < x)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }

        return left;
    }
}