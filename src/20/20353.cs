/**
 * 20353. Atrium
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,764 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 9월 21일
 */

using System;

class Program {
    public static void Main() {
        double a = double.Parse(Console.ReadLine());

        Console.WriteLine(Math.Sqrt(a) * 4);
    }
}