/**
 * 22193. Multiply
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 21,400 KB
 * 소요 시간: 880 ms
 * 해결 날짜: 2021년 9월 19일
 */

using System;
using System.Numerics;

class Program {
    public static void Main() {
        Console.ReadLine();

        BigInteger A = BigInteger.Parse(Console.ReadLine());
        BigInteger B = BigInteger.Parse(Console.ReadLine());

        Console.WriteLine(A * B);
    }
}