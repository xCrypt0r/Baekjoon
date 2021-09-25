/**
 * 18127. 모형결정
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,872 KB
 * 소요 시간: 92 ms
 * 해결 날짜: 2021년 9월 25일
 */

using System;
using System.Numerics;

class Program
{
    public static void Main()
    {
        var input = Array.ConvertAll(Console.ReadLine().Split(' '), BigInteger.Parse);
        var (A, B) = (input[0], input[1]);

        Console.WriteLine(A * B * (B + 1) / 2 - B * B + 1);
    }
}