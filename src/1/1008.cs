/**
 * 1008. A/B
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,768 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2021년 9월 19일
 */

using System;

class Program {
    public static void Main() {
        string[] input = Console.ReadLine().Split(' ');
        double A = Convert.ToInt32(input[0]);
        double B = Convert.ToInt32(input[1]);

        Console.WriteLine(A / B);
    }
}