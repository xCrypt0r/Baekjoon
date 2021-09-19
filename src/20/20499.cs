/**
 * 20499. Darius님 한타 안 함?
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,720 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 9월 20일
 */

using System;

class Program {
    public static void Main() {
        int[] input = Array.ConvertAll(Console.ReadLine().Split('/'), int.Parse);
        var (K, D, A) = (input[0], input[1], input[2]);

        Console.WriteLine(K + A < D || D == 0 ? "hasu" : "gosu");
    }
}