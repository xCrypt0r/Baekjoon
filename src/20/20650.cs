/**
 * 20650. Do You Know Your ABCs?
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,744 KB
 * 소요 시간: 100 ms
 * 해결 날짜: 2021년 10월 17일
 */

using System;

class Program
{
    public static void Main()
    {
        var A = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);

        Array.Sort(A);

        Console.WriteLine($"{A[0]} {A[1]} {A[6] - A[1] - A[0]}");
    }
}