/**
 * 20215. Cutting Corners
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,780 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 9월 21일
 */

using System;

class Program {
    public static void Main() {
        double[] input = Array.ConvertAll(Console.ReadLine().Split(' '), double.Parse);
        var (w, h) = (input[0], input[1]);
        var res = (w + h) - Math.Sqrt(Math.Pow(w, 2) + Math.Pow(h, 2));

        Console.WriteLine("{0:F6}", res);
    }
}