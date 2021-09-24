/**
 * 10889. Ancient symbol
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,720 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        int x = int.Parse(Console.ReadLine());

        Console.WriteLine((x * x * 111) + (x * 11) + 1);
    }
}