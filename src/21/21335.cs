/**
 * 21335. Another Eruption
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,760 KB
 * 소요 시간: 112 ms
 * 해결 날짜: 2021년 9월 21일
 */

using System;

class Program {
    public static void Main() {
        double a = double.Parse(Console.ReadLine());
        double b = Math.Sqrt(a / Math.PI);

        Console.WriteLine(b * Math.PI * 2);
    }
}