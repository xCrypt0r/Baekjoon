/**
 * 4562. No Brainer
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,720 KB
 * 소요 시간: 104 ms
 * 해결 날짜: 2021년 9월 19일
 */

using System;

class Program {
    public static void Main() {
        int n = int.Parse(Console.ReadLine());

        for (int i = 0; i < n; i++) {
            string[] input = Console.ReadLine().Split(' ');
            int X = int.Parse(input[0]);
            int Y = int.Parse(input[1]);

            Console.WriteLine(X < Y ? "NO BRAINS" : "MMM BRAINS");
        }
    }
}