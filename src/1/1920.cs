/**
 * 1920. 수 찾기
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 24,796 KB
 * 소요 시간: 236 ms
 * 해결 날짜: 2021년 9월 23일
 */

using System;
using System.Text;

class Program {
    public static void Main() {
        int N = int.Parse(Console.ReadLine());
        int[] A = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        int M = int.Parse(Console.ReadLine());
        int[] X = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        string[] res = new string[M];

        Array.Sort(A);

        for (int i = 0; i < M; i++)
        {
            res[i] = Array.BinarySearch(A, X[i]) < 0 ? "0" : "1";
        }

        Console.WriteLine(new StringBuilder(string.Join("\n", res)));
    }
}