/**
 * 16481. 원 전문가 진우
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,760 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        var r = Array.ConvertAll(Console.ReadLine().Split(), double.Parse);
        var res = (r[0] * r[1] * r[2]) / (r[0] * r[1] + r[1] * r[2] + r[2] * r[0]);

        Console.WriteLine("{0:F9}", res);
    }
}