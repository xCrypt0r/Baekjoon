/**
 * 21638. SMS from MCHS
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,732 KB
 * 소요 시간: 96 ms
 * 해결 날짜: 2021년 9월 21일
 */

using System;

class Program {
    public static void Main() {
        int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        int[] input2 = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (t1, v1, t2, v2) = (input[0], input[1], input2[0], input2[1]);

        if (t2 < 0 && v2 >= 10)
        {
            Console.WriteLine("A storm warning for tomorrow! Be careful and stay home if possible!");
        }
        else if (t2 < t1)
        {
            Console.WriteLine("MCHS warns! Low temperature is expected tomorrow.");
        }
        else if (v1 < v2)
        {
            Console.WriteLine("MCHS warns! Strong wind is expected tomorrow.");
        }
        else
        {
            Console.WriteLine("No message");
        }
    }
}