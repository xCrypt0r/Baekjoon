/**
 * 1476. 날짜 계산
 *
 * 작성자: xCrypt0r
 * 언어: C# 9.0 (.NET)
 * 사용 메모리: 5,752 KB
 * 소요 시간: 108 ms
 * 해결 날짜: 2021년 9월 22일
 */

using System;

class Program {
    public static void Main() {
        int[] input = Array.ConvertAll(Console.ReadLine().Split(' '), int.Parse);
        var (E, S, M ) = (input[0], input[1], input[2]);
        int year = 1;

        while (true)
        {
            if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0)
            {
                Console.WriteLine(year);

                break;
            }

            year++;
        }
    }
}