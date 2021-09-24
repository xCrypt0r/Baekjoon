/**
 * 20494. 스시
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,756 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2021년 9월 24일
 */

using System;

class Program
{
    public static void Main()
    {
        var T = int.Parse(Console.ReadLine());
        var count = 0;

        while (T-- > 0)
        {
            count += Console.ReadLine().Length;
        }

        Console.WriteLine(count);
    }
}